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
function buildhelpweb(varargin)
  % buildhelpweb(destdir, [currentlang])

  if ~(nargin() == 1 || nargin() == 2)
    error(_('Wrong number of input arguments.'));
  end

  if nargin() == 2
    lang = varargin{2};
  else
    lang = getdefaultlanguage();
  end

  dirdest = varargin{1};
  if ~isdir(dirdest)
    error(_('Existing directory expected.'));
  end

  srclist = {};
  run([nelsonroot() '/modules/' 'modules.m']);
  for module = modules_help_list(:)'
    src = [nelsonroot(), '/modules/', module{1}, '/help/', lang, '/xml'];
    if isdir(src)
      srclist{end + 1} = src;
    end
  end
  vervec = version('-number');
  title = ['Nelson', ' ', int2str(vervec(1)), '.', int2str(vervec(2)), '.', int2str(vervec(3)), '.', int2str(vervec(4))];
  xmldoctohtml(srclist, dirdest, title);

end
%=============================================================================
