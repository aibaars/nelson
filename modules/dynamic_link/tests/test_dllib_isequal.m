%=============================================================================
% Copyright (c) 2016-present Allan CORNET (Nelson)
%=============================================================================
% This file is part of the Nelson.
%=============================================================================
% LICENCE_BLOCK_BEGIN
% SPDX-License-Identifier: LGPL-3.0-or-later
% LICENCE_BLOCK_END
%=============================================================================
path_1 = [modulepath(nelsonroot(),'dynamic_link','bin'), '/libnlsDynamic_link', getdynlibext()];
path_2 = [modulepath(nelsonroot(),'dynamic_link','bin'), '/libnlsCore', getdynlibext()];
lib1 = dlopen(path_1);
lib2 = dlopen(path_2);
lib3 = dlopen(path_1);
assert_istrue(isequal(lib1, lib1));
assert_isfalse(isequal(lib1, lib2));
assert_isfalse(isequal(lib1, lib3));
%=============================================================================
