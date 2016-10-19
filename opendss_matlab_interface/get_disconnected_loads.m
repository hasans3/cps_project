function [T_load_loss] = get_disconnected_loads()
%Instantiate the OpenDSS Object
DSSObj = actxserver('OpenDSSEngine.DSS');

%Start the solver
% DSSStart = DSSObj.Start(0);
% if ~DSSStart
%     disp('Unable to start the OpenDSS Engine');
% else
%     disp('OpenDSS Engine started successfully'); 
% end

%Set up the Text, Circuit, and Solution Interfaces
%DSSText = DSSObj.Text;
DSSCircuit = DSSObj.ActiveCircuit;
DSSSolution = DSSCircuit.Solution;
% DSSText.Command = 'clear';

% Loading the circuit Using the Text Interface
%DSSText.Command = 'Compile "G:\saqib\open DSS\14bussystemwithtransformerasline.dss"';
%Accessing each load in the system
T_load_loss = [];
load_loss = {};
iLoads = DSSCircuit.FirstPCElement;
k=1;
while(iLoads > 0)
    load_current{k,1} = DSSCircuit.ActiveCktElement.Name;
    load_current{k,2} = DSSCircuit.ActiveCktElement.Currents;
    y = load_current{k,2};
    for j=1:3
        [il1, il2] = cart2pol(y(2*j-1),y(2*j));
        load_cur_mag{k,j} = il2;
    end
    iLoads = DSSCircuit.NextPCElement;
    k=k+1;
end
[row_load_cur_mag col_load_cur_mag] = size(load_cur_mag);
for i = 1:row_load_cur_mag
    if (load_cur_mag{i,1} <= 1)
        load_loss{i,1} = load_current{i,1};
    end
end
T_load_loss = [T_load_loss; load_loss];
DSSSolution.Solve;
%load_loss = 'L1';