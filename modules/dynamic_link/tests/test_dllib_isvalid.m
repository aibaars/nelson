%=============================================================================
% Copyright (c) 2016-present Allan CORNET (Nelson)
%=============================================================================
% This file is part of the Nelson.
%=============================================================================
% LICENCE_BLOCK_BEGIN
% SPDX-License-Identifier: LGPL-3.0-or-later
% LICENCE_BLOCK_END
%=============================================================================
assert_isequal(nargin('dllib_isprop'), 2);
assert_isequal(nargout('dllib_isprop'), 1);
%=============================================================================
path_ref = [modulepath(nelsonroot(),'dynamic_link','bin'), '/libnlsDynamic_link', getdynlibext()];
lib = dlopen(path_ref);
assert_istrue(isvalid(lib));
dlclose(lib);
assert_isfalse(isvalid(lib));
%=============================================================================
