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
rng('default');
r = rng();
R = randn(5);
REF = [-0.1500      1.3956     -1.2158     -0.4713     -0.3504;
-1.6781      0.7325     -0.9932     -1.3443      0.5480;
-0.5289      0.5432      0.9440     -0.7587     -0.6362;
-0.5384      1.0411     -0.5281     -0.3932      0.0739;
-0.1113     -0.3637     -0.7178     -1.1649      1.1843];
assert_isapprox(R, REF, 1e-4);
%=============================================================================
rng('default');
R = randn(3, 2, 'single');
REF = [   -0.1500     -0.5384;
-1.6781     -0.1113;
-0.5289      1.3956];
assert_isapprox(R, REF, 1e-4);
%=============================================================================
