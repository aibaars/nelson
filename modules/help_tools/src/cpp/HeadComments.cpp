//=============================================================================
// Copyright (c) 2016-present Allan CORNET (Nelson)
//=============================================================================
// This file is part of the Nelson.
//=============================================================================
// LICENCE_BLOCK_BEGIN
// SPDX-License-Identifier: LGPL-3.0-or-later
// LICENCE_BLOCK_END
//=============================================================================
#include <boost/algorithm/string.hpp>
#include <boost/filesystem.hpp>
#include <fstream>
#include <iostream>
#include <sstream>
#include "HeadComments.hpp"
#include "Comments.hpp"
#include "Error.hpp"
#include "ParseFile.hpp"
#include "characters_encoding.hpp"
//=============================================================================
namespace Nelson {
//=============================================================================
static std::ifstream&
safegetline(std::ifstream& os, std::string& line)
{
    std::string myline;
    if (getline(os, myline)) {
        if (myline.size() && myline[myline.size() - 1] == '\r') {
            line = myline.substr(0, myline.size() - 1);
        } else {
            line = myline;
        }
    }
    return os;
}
//=============================================================================
static bool
isEmptyLine(const std::string& line)
{
    std::string str = boost::algorithm::trim_left_copy(line);
    return str.empty();
}
//=============================================================================
static bool
isFunctionDefinitionLine(const std::string& line)
{
    if (!isCommentedLine(line)) {
        if (boost::algorithm::contains(line, "function")) {
            return true;
        }
    }
    return false;
}
//=============================================================================
static std::string
removeCommentCharacters(const std::string& line)
{
    std::string res;
    const std::string commentSymbol = getCommentSymbol();
    std::string str = boost::algorithm::trim_left_copy(line);
    if (boost::algorithm::starts_with(str, commentSymbol)) {
        boost::algorithm::erase_first(str, commentSymbol);
        res = str;
    }
    return res;
}
//=============================================================================
wstringVector
HeadComments(Evaluator* eval, const std::wstring& filename, HEADCOMMENTS_ERROR& headError)
{
    wstringVector comments;
    headError = HEADCOMMENTS_ERROR::MACRO_OK;
    boost::filesystem::path pathFile(filename);
    bool bIsFile
        = boost::filesystem::exists(pathFile) && !boost::filesystem::is_directory(pathFile);
    if (!bIsFile) {
        headError = HEADCOMMENTS_ERROR::FILE_NOT_EXIST;
        return comments;
    }
    ParserState parserState = ParseFile(eval, filename);
    if (parserState != ParserState::FuncDef) {
        headError = HEADCOMMENTS_ERROR::NOT_A_MACRO;
        return comments;
    }
    std::ifstream istream;
#ifdef _MSC_VER
    istream.open(filename);
#else
    istream.open(wstring_to_utf8(filename));
#endif
    if (istream.is_open()) {
        std::string line;
        while (!istream.eof()) {
            safegetline(istream, line);
            if (!isCommentedLine(line) && (!isEmptyLine(line))) {
                break;
            }
        }
        if (isFunctionDefinitionLine(line)) {
            while (!istream.eof()) {
                safegetline(istream, line);
                if (!isEmptyLine(line)) {
                    break;
                }
            }
            if (isCommentedLine(line)) {
                comments.push_back(utf8_to_wstring(removeCommentCharacters(line)));
                while (!istream.eof()) {
                    safegetline(istream, line);
                    if (isCommentedLine(line)) {
                        comments.push_back(utf8_to_wstring(removeCommentCharacters(line)));
                    } else {
                        break;
                    }
                }
            }
        }
        istream.close();
    }
    return comments;
}
//=============================================================================
}
//=============================================================================
