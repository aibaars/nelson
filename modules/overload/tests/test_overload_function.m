%=============================================================================
% Copyright (c) 2016-present Allan CORNET (Nelson)
%=============================================================================
% This file is part of the Nelson.
%=============================================================================
% LICENCE_BLOCK_BEGIN
% This program is free software; you can redistribute it and/or
% modify it under the terms of the GNU Lesser General Public
% License as published by the Free Software Foundation; either
% version 2.1 of the License, or (at your option) any later version.
%
% Alternatively, you can redistribute it and/or
% modify it under the terms of the GNU General Public License as
% published by the Free Software Foundation; either version 2 of
% the License, or (at your option) any later version.
%
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU Lesser General Public License for more details.
%
% You should have received a copy of the GNU Lesser General Public
% License along with this program. If not, see <http://www.gnu.org/licenses/>.
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
