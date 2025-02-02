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
#include "ArrayOf.hpp"
#include "GOProperty.hpp"
//=============================================================================
namespace Nelson {
//=============================================================================
class GOStringProperty : public GOProperty
{
protected:
    std::string m_data;

public:
    //=============================================================================
    GOStringProperty() = default;
    //=============================================================================
    ~GOStringProperty() override = default;
    //=============================================================================
    ArrayOf
    get() override;
    //=============================================================================
    void set(ArrayOf /*unused*/) override;
    //=============================================================================
    std::string
    data()
    {
        return m_data;
    }
    //=============================================================================
    void
    value(const std::string& m)
    {
        m_data = m;
    }
    //=============================================================================
    bool
    is(const std::string& m)
    {
        return (m_data == m);
    }
    //=============================================================================
    std::string
    print(const std::string& propertyName) override
    {
        return "\t" + propertyName + ":\t'" + m_data + "'";
    }
    //=============================================================================
};
//=============================================================================
} // namespace Nelson
//=============================================================================
