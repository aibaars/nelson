%=============================================================================
% Copyright (c) 2016-present Allan CORNET (Nelson)
%=============================================================================
% This file is part of the Nelson.
%=============================================================================
% LICENCE_BLOCK_BEGIN
% SPDX-License-Identifier: LGPL-3.0-or-later
% LICENCE_BLOCK_END
%=============================================================================
assert_checkerror('gamma(int32(4))', _('function int32_gamma undefined.'));
assert_checkerror('gamma(4i)', _('Input argument must be dense and real.'));
assert_checkerror('gamma(single(4i))', _('Input argument must be dense and real.'));
addpath([nelsonroot(), '/modules/overload/tests/overload']);
assert_isequal(gamma(int32(4)), int32(44));
assert_checkerror('gamma(4i)', _('Input argument must be dense and real.'));
overloadbasictypes(true);
assert_isequal(gamma(4i), 42);
assert_checkerror('gamma(single(4i))', _('Input argument must be dense and real.'));
overloadbasictypes(false);
assert_checkerror('gamma(4i)', _('Input argument must be dense and real.'));
