function [ x, y] = maptest()
keyset = {'1','2'};
valueset = {'Line.l1', 'Line.l2'};
mapObj = containers.Map(keyset, valueset);
%mapObj1 = containers.Map(keyset1, valueset1);
%p= mapObj.keys(1)
%allk= keys(mapObj);
x = '1';
%a = 'disconnectinglines';
y = values(mapObj, {'1'});
%tf = isnumeric(y)
%pt = cell2struct(y,a,1);
% [r c]= size(p.disconnectinglines);
% for i = 1:c
%     disp(p.disconnectinglines{1,i});
% end
