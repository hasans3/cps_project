function [x, y] = maptest14bus()
keyset = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
valueset = {'Line.tl12', 'Line.tl23', 'Line.tl1011', 'Line.tl1213', 'Line.tl25', 'Line.tl34', 'Line.tl24', 'Line.tl47', 'Line.tl15', 'Line.tl914', 'Line.tl49', 'Line.tl612', 'Line.tl1314', 'Line.tl910', 'Line.tl611', 'Line.tl79', 'Line.tl78', 'Line.tl45', 'Line.tl56', 'Line.tl613'};
mapObj = containers.Map(keyset, valueset);
%mapObj1 = containers.Map(keyset1, valueset1);
%p= mapObj.keys(1)
%allk= keys(mapObj);
x = 4;
%a = 'disconnectinglines';
 y = values(mapObj, {x});
%tf = isnumeric(y)
%pt = cell2struct(y,a,1);
% [r c]= size(p.disconnectinglines);
% for i = 1:c
%     disp(p.disconnectinglines{1,i});
% end
