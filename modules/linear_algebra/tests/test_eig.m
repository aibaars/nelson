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
M_REF = diag(1:3) + i;
M = diag(1:3) + i;
[V, D] = eig(M);
assert_isequal(M, M_REF);
V_REF = [0.5316 + 0.1920i,   0.7970 + 0.0000i,  -0.2004 + 0.0724i;
   0.6009 + 0.0000i,  -0.5046 - 0.2546i,  -0.5046 + 0.2546i;
   0.5316 - 0.1920i,  -0.2004 - 0.0724i,   0.7970 + 0.0000i];
assert_isapprox(real(V), real(V_REF), 1e-4);
assert_isapprox(imag(V), imag(V_REF), 1e-3);
D_REF = [2.0000 + 2.7693i,   0.0000 + 0.0000i,   0.0000 + 0.0000i;
   0.0000 + 0.0000i,   1.4103 + 0.1154i,   0.0000 + 0.0000i;
   0.0000 + 0.0000i,   0.0000 + 0.0000i,   2.5897 + 0.1154i];
assert_isapprox(real(D), real(D_REF), 1e-4);
assert_isapprox(imag(D), imag(D_REF), 1e-3);
%=============================================================================
M = [0.5488      0.5449      0.4376;
0.7152      0.4237      0.8918;
0.6028      0.6459      0.9637];
M_REF = M;
[V, D] = eig(M);
assert_isequal(M, M_REF);
V_REF = [-0.4430   -0.7788    0.4814;
   -0.5993   -0.0110   -0.8486;
   -0.6668    0.6272    0.2193];
assert_isapprox(V, V_REF, 1e-4);
D_REF = [1.9447         0         0;
         0    0.2040         0;
         0         0   -0.2125];
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
M = diag(1:3);
M_REF = M;
[V, D] = eig(M);
assert_isequal(M, M_REF);
V_REF = [1     0     0;
     0     1     0;
     0     0     1];
assert_isapprox(V, V_REF, 1e-4);
D_REF = [1     0     0;
     0     2     0;
     0     0     3];
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
V = [];
D = [];
N = 4;
A = [1:N * N];
M = reshape(A, N, N);
[V, D] = eig(M);
assert_isfalse(all(all(abs(M*V - V*D)> 100*eps)))
D_REF = [36.2094         0         0         0;
         0   -2.2094         0         0;
         0         0    0.0000         0;
         0         0         0    0.0000];
assert_isapprox(real(D), D_REF, 1e-4);
%=============================================================================
[V, D] = eig(diag(single(1:3)));
V_REF = single(eye(3, 3));
D_REF = diag(single(1:3));
if ~ismac()
  assert_isequal(V, V_REF);
end
assert_isequal(D, D_REF);
%=============================================================================
[V, D] = eig(diag(1:3) + i);
V_REF = [0.5316 + 0.1920i,   0.7970 + 0.0000i,  -0.2004 + 0.0724i;
0.6009 + 0.0000i,  -0.5046 - 0.2546i,  -0.5046 + 0.2546i;
0.5316 - 0.1920i,  -0.2004 - 0.0724i,   0.7970 + 0.0000i];
D_REF = [2.0000 + 2.7693i,   0.0000 + 0.0000i,   0.0000 + 0.0000i;
   0.0000 + 0.0000i,   1.4103 + 0.1154i,   0.0000 + 0.0000i;
   0.0000 + 0.0000i,   0.0000 + 0.0000i,   2.5897 + 0.1154i];
assert_isapprox(V, V_REF, 1e-3);
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
[V, D] = eig(diag(single(1:3)) + i);
V_REF = [0.5316 + 0.1920i,   0.7970 + 0.0000i,  -0.2004 + 0.0724i;
   0.6009 + 0.0000i,  -0.5046 - 0.2546i,  -0.5046 + 0.2546i;
   0.5316 - 0.1920i,  -0.2004 - 0.0724i,   0.7970 + 0.0000i];
V_REF = single(V_REF);
D_REF = [2.0000 + 2.7693i   0.0000 + 0.0000i   0.0000 + 0.0000i;
   0.0000 + 0.0000i   1.4103 + 0.1154i   0.0000 + 0.0000i;
   0.0000 + 0.0000i   0.0000 + 0.0000i   2.5897 + 0.1154i];
D_REF = single(D_REF);
assert_isapprox(V, V_REF, 1e-3);
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
[V, D] = eig([2, 1; 1,2]);
V_REF = [-0.7071    0.7071;
    0.7071    0.7071];
D_REF = [1     0; 0     3];
assert_isapprox(abs(V), abs(V_REF), 1e-4);
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
[V, D] = eig([2, 1; 1,2] + i);
V_REF = [0.7071 + 0.0000i  -0.7071 - 0.0000i;
   0.7071 + 0.0000i   0.7071 + 0.0000i];
D_REF = [3.0000 + 2.0000i   0.0000 + 0.0000i;
   0.0000 + 0.0000i   1.0000 - 0.0000i];
assert_isapprox(abs(V), abs(V_REF), 1e-3);
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
[V, D] = eig([-1,8+i;1,2-i]);
V_REF = [0.9781 + 0.0000i,   0.8640 + 0.0000i;
-0.2066 - 0.0256i,   0.4882 - 0.1236i];
D_REF = [-2.6633 - 0.4210i,   0.0000 + 0.0000i;
   0.0000 + 0.0000i,   3.6633 - 0.5790i];
assert_isapprox(V, V_REF, 1e-3);
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
[V, D] = eig(-2i-9);
V_REF = 1;
D_REF =  -9.0000 - 2.0000i;
assert_isapprox(V, V_REF, 1e-4);
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
[V, D] = eig([1,4;3,2]);
V_REF = [-0.8000   -0.7071;
    0.6000   -0.7071];
D_REF = [-2     0;  0     5];
assert_isapprox(V, V_REF, 1e-4);
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
[V, D] = eig([1,4i;3+9i,2i-1]);
V_REF = [-0.5615 - 0.2027i   0.4929 - 0.0122i;
   0.8023 + 0.0000i   0.8700 + 0.0000i];
D_REF = [-0.8256 - 5.0565i   0.0000 + 0.0000i;
   0.0000 + 0.0000i   0.8256 + 7.0565i];
assert_isapprox(V, V_REF, 1e-4);
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
[V, D] = eig(6.2);
V_REF = 1;
D_REF = 6.2;
assert_isapprox(V, V_REF, 1e-4);
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
B = [ 3     -2      -.9    2*eps
     -2      4       1    -eps
     -eps/4  eps/2  -1     0
     -.5    -.5      .1    1   ];
[V, D] = eig(B);
V_REF = [0.6153   -0.4176   -0.0000   -0.1528;
   -0.7881   -0.3261    0.0000    0.1345;
   -0.0000   -0.0000   -0.0000   -0.9781;
    0.0189    0.8481   -1.0000    0.0443];
D_REF = [5.5616         0         0         0;
         0    1.4384         0         0;
         0         0    1.0000         0;
         0         0         0   -1.0000];
if ~ismac()
 assert_isapprox(V, V_REF, 1e-4);
end
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
B = [ 3     -2      -.9    2*eps
     -2      4       1    -eps
     -eps/4  eps/2  -1     0
     -.5    -.5      .1    1   ];
[V, D] = eig(B, 'nobalance');
V_REF = [0.6153   -0.4176   -0.0000   -0.1528;
   -0.7881   -0.3261    0.0000    0.1345;
   -0.0000   -0.0000   -0.0000   -0.9781;
    0.0189    0.8481   -1.0000    0.0443];
D_REF = [5.5616         0         0         0;
         0    1.4384         0         0;
         0         0    1.0000         0;
         0         0         0   -1.0000];
assert_isapprox(V, V_REF, 1e-4);
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
A = [  1.0000    0.5000    0.3333    0.2500;
0.5000    1.0000    0.6667    0.5000;
0.3333    0.6667    1.0000    0.7500;
0.2500    0.5000    0.7500    1.0000];
[V, D] = eig(A);
V_REF = [0.0694   -0.4422   -0.8105    0.3778;
   -0.3619    0.7420   -0.1877    0.5322;
    0.7694    0.0487    0.3010    0.5614;
   -0.5218   -0.5015    0.4661    0.5088];
D_REF = [0.2078         0         0         0;
         0    0.4078         0         0;
         0         0    0.8482         0;
         0         0         0    2.5362];
assert_isapprox(abs(V), abs(V_REF), 1e-4);
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
A = [1     2     3;
3     1     2;
2     3     1];
[V,D] = eig(A);
assert_isfalse(all(all(abs(A*V - V*D)> 100*eps)))
D_REF = [6.0000 + 0i,  0, 0;
        0,  -1.5000 + 0.8660i,                  0;
        0,                  0,  -1.5000 - 0.8660i];
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
A = [   17    24     1     8    15;
23     5     7    14    16;
 4     6    13    20    22;
10    12    19    21     3;
11    18    25     2     9];
[V, D ] = eig(A);
V_REF = [-0.4472    0.0976   -0.6330    0.6780   -0.2619;
   -0.4472    0.3525    0.5895    0.3223   -0.1732;
   -0.4472    0.5501   -0.3915   -0.5501    0.3915;
   -0.4472   -0.3223    0.1732   -0.3525   -0.5895;
   -0.4472   -0.6780    0.2619   -0.0976    0.6330];
D_REF = [65.0000         0         0         0         0;
         0  -21.2768         0         0         0;
         0         0  -13.1263         0         0;
         0         0         0   21.2768         0;
         0         0         0         0   13.1263];
assert_isapprox(V, V_REF, 1e-4);
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
A = [1 7 3; 2 9 12; 5 22 7];
[V, D ] = eig(A);
V_REF = [-0.2610   -0.9734    0.1891;
   -0.5870    0.2281   -0.5816;
   -0.7663   -0.0198    0.7912];
D_REF = [25.5548         0         0;
         0   -0.5789         0;
         0         0   -7.9759];
%=============================================================================
A = [3 1 0; 0 3 1; 0 0 3];
[V, D ] = eig(A);
V_REF = [1.0000     -1.0000      1.0000;
      0.0000      0.0000     -0.0000;
      0.0000      0.0000      0.0000];
D_REF = [3     0     0;
     0     3     0;
     0     0     3];
assert_isapprox(V, V_REF, 1e-4);
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
% compact
%=============================================================================
M = diag(1:3) + i;
D = eig(M);
D_REF = [2.0000 + 2.7693i;
   1.4103 + 0.1154i;
   2.5897 + 0.1154i];
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
M = [0.5488      0.5449      0.4376;
0.7152      0.4237      0.8918;
0.6028      0.6459      0.9637];
D = eig(M);
D_REF = [1.9447;
0.2040;
-0.2125];
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
M = diag(1:3);
D = eig(M);
D_REF = [1; 2; 3];
assert_isequal(D, D_REF);
%=============================================================================
V = [];
D = [];
N = 4;
A = [1:N * N];
M = reshape(A, N, N);
D = eig(M);
D_REF = [36.2094;
-2.2094;
 0.0000;
 0.0000];
 assert_isapprox(real(D), D_REF, 1e-4);
%=============================================================================
D = eig(diag(single(1:3)));
D_REF = single([1;2; 3]);
assert_isequal(D, D_REF);
%=============================================================================
D = eig(diag(1:3) + i);
D_REF = [2.0000 + 2.7693i;
   1.4103 + 0.1154i;
   2.5897 + 0.1154i];
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
D = eig([2, 1; 1,2]);
D_REF = [1; 3];
assert_isequal(D, D_REF);
%=============================================================================
D = eig([2, 1; 1,2] + i);
D_REF = [3.0000 + 2.0000i;
   1.0000 - 0.0000i];
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
D = eig([-1,8+i;1,2-i]);
D_REF = [-2.6633 - 0.4210i;
   3.6633 - 0.5790i];
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
D = eig(-2i-9);
D_REF = -9.0000 - 2.0000i;
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
D = eig([1,4;3,2]);
D_REF = [-2; 5];
assert_isequal(D, D_REF);
%=============================================================================
D = eig([1,4i;3+9i,2i-1]);
D_REF = [-0.8256 - 5.0565i;
   0.8256 + 7.0565i];
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
D = eig(6.2);
D_REF = 6.2;
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
B = [ 3     -2      -.9    2*eps
     -2      4       1    -eps
     -eps/4  eps/2  -1     0
     -.5    -.5      .1    1   ];
D = eig(B);
D_REF = [5.5616;
    1.4384;
    1.0000;
   -1.0000];
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
B = [ 3     -2      -.9    2*eps
     -2      4       1    -eps
     -eps/4  eps/2  -1     0
     -.5    -.5      .1    1   ];
D = eig(B, 'nobalance');
D_REF = [5.5616;
    1.4384;
    1.0000;
   -1.0000];
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
A = [  1.0000    0.5000    0.3333    0.2500;
0.5000    1.0000    0.6667    0.5000;
0.3333    0.6667    1.0000    0.7500;
0.2500    0.5000    0.7500    1.0000];
D = eig(A);
D_REF = [0.2078;
    0.4078;
    0.8482;
    2.5362];
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
A = [1     2     3;
3     1     2;
2     3     1];
D = eig(A);
D_REF = [6.0000 + 0.0000i;
  -1.5000 + 0.8660i;
  -1.5000 - 0.8660i];
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
A = [   17    24     1     8    15;
23     5     7    14    16;
 4     6    13    20    22;
10    12    19    21     3;
11    18    25     2     9];
D = eig(A);
D_REF = [65.0000;
  -21.2768;
  -13.1263;
   21.2768;
   13.1263];
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
A = [1 7 3; 2 9 12; 5 22 7];
D = eig(A);
D_REF = [25.5548;
   -0.5789;
   -7.9759];
assert_isapprox(D, D_REF, 1e-4);
%=============================================================================
A = [3 1 0; 0 3 1; 0 0 3];
D = eig(A);
D_REF = [3; 3; 3];
assert_isequal(D, D_REF);
%=============================================================================
