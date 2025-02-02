//=============================================================================
// Copyright (c) 2016-present Allan CORNET (Nelson)
//=============================================================================
// This file is part of the Nelson.
//=============================================================================
// LICENCE_BLOCK_BEGIN
// SPDX-License-Identifier: LGPL-3.0-or-later
// LICENCE_BLOCK_END
//=============================================================================
#pragma once
//=============================================================================
#include <vector>
#include <string>
#include "ArrayOf.hpp"
#include "GOProperty.hpp"
//=============================================================================
namespace Nelson {
//=============================================================================
class GOVector4DProperty : public GOProperty
{
protected:
    std::vector<double> m_data;

public:
    //=============================================================================
    GOVector4DProperty() { m_data.reserve(4); }
    //=============================================================================
    ~GOVector4DProperty() override { m_data.clear(); }
    //=============================================================================
    ArrayOf
    get() override;
    //=============================================================================
    void set(ArrayOf /*unused*/) override;
    //=============================================================================
    void
    set(double v1, double v2, double v3, double v4);
    //=============================================================================
    std::vector<double>
    data()
    {
        return m_data;
    }
    //=============================================================================
    void
    value(double x1, double x2, double x3, double x4)
    {
        if (!m_data.empty()) {
            m_data.clear();
            m_data.reserve(4);
        }
        m_data.push_back(x1);
        m_data.push_back(x2);
        m_data.push_back(x3);
        m_data.push_back(x4);
    }
    //=============================================================================
    std::string
    print(const std::string& propertyName) override;
    //=============================================================================
};
//=============================================================================
} // namespace Nelson
//=============================================================================
