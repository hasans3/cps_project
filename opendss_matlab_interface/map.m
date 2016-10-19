function [p, x, y] = map()
keyset = {'loadbus1', 'loadbus2', 'loadbus3'};
valueset = {{'Line.l1', 'Line.l2'}, {'Line.l2', 'Line.l4'}, {'Line.l3', 'Line.l4'}};
mapObj = containers.Map(keyset, valueset);
%mapObj1 = containers.Map(keyset1, valueset1);
%p= mapObj.keys(1)
%allk= keys(mapObj);
x = 'loadbus3';
a = 'disconnectinglines';
y = values(mapObj, {'loadbus3'});
p = cell2struct(y,a,1);
% [r c]= size(p.disconnectinglines);
% for i = 1:c
%     disp(p.disconnectinglines{1,i});
% end
