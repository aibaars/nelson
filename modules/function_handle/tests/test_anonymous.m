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
F = @() (3);
R = func2str(F);
REF = '@()3';
assert_isequal(R, REF);
%=============================================================================
F = @(x) (3);
R = func2str(F);
REF = '@(x)3';
assert_isequal(R, REF);
%=============================================================================
F = @(x, y) (3);
R = func2str(F);
REF = '@(x,y)3';
assert_isequal(R, REF);
%=============================================================================
F = @(x) cos(x);
R = func2str(F);
REF = '@(x)cos(x)';
assert_isequal(R, REF);
%=============================================================================
F = @(x) cos(1) + cos(3);
R = func2str(F);
REF = '@(x)1+3';
assert_isequal(R, REF);
%=============================================================================

F = @(x) 1 + 3;
R = func2str(F);
REF = '@(x)1+3';
assert_isequal(R, REF);
%=============================================================================
F = @(x)1:3;
R = func2str(F);
REF = '@(x))1:3';
assert_isequal(R, REF);
%=============================================================================
F = @(x)[1:3];
R = func2str(F);
REF = '@(x))1:3';
assert_isequal(R, REF);
%=============================================================================
F = @(x)[1:cos(x)];
R = func2str(F);
REF = '@(x))[1:cos(x)]';
assert_isequal(R, REF);
%=============================================================================
F = @(x)cos(x):2;
R = func2str(F);
REF = '@(x))1:cos(x)';
assert_isequal(R, REF);
%=============================================================================



F = @(x)1:cos(x);
R = func2str(F);
REF = '@(x))1:cos(x)';
assert_isequal(R, REF);
%=============================================================================
F = @(x)cos(sin(x));


F = @(x)1:3:4;
R = func2str(F);
REF = '@(x))1:3:4';
assert_isequal(R, REF);
%=============================================================================
F = @(x)1:2:3:4:4:5