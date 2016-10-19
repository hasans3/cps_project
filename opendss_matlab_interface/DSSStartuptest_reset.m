function [DSSObj, DSSText, Total_line_loss, Total_line_loss_data1] = DSSStartuptest_reset()

%Instantiate the OpenDSS Object
DSSObj = actxserver('OpenDSSEngine.DSS');

%Start the solver
DSSStart = DSSObj.Start(0);
if ~DSSStart
    disp('Unable to start the OpenDSS Engine')
return
end

%Set up the Text, Circuit, and Solution Interfaces
DSSText = DSSObj.Text;
DSSCircuit = DSSObj.ActiveCircuit;
DSSSolution = DSSCircuit.Solution;
DSSText.Command = 'clear';

% Loading the circuit Using the Text Interface
DSSText.Command = 'Compile "G:\saqib\open DSS\14bussystemwithtransformerasline.dss"';

% getting bus voltages
my_Bus=DSSCircuit.AllBusNames;
num_Bus=DSSCircuit.NumBuses;
j=1;
%DSSSolution.Solve;
volMag={};
curMag={};
curMag_normal={};
Total = [];
Total_line_loss_data={};
% line_loss={};
% line_loss1={};
% Total_line_loss=[];
% getting Currents associated to PD elements Only
iLines = DSSCircuit.FirstPDElement;
j=1;
max = {};
v = {};

%getting the lines to be taken out 
[key, value] = maptest14bus1();

%v = char(value);
%[r c]= size(struct.disconnectinglines);
%setting Line current thresholds
while(iLines > 0 )
     current{j,1}=DSSCircuit.ActiveCktElement.Name;
     current{j,2}=DSSCircuit.ActiveCktElement.Currents;
     x= current{j,2};
     for k=1:3
       [i1, i2]=cart2pol(x(6+2*k-1),x(6+2*k));
       curMag_normal{j,k}= i2;
       maxcurline_limit{j,k}= curMag_normal{j,k}*(10/7);
       %max  = maxcurline_limit{j,k}
     end;
     iLines = DSSCircuit.NextPDElement;
     j=j+1;
end
%disp('run successful');

% making the data type same 
[valuerowsize valuecolsize]= size(value);
for i = 1:valuerowsize
    v{1,i} = char(value{i,1})
end

%checking and disconnecting overloaded lines for each element in the set
[vrow vcol] = size(v);
for i= 1:vcol
    Total_line_loss=[];
    line_loss={};
    line_loss1={};
    TLL={};
    %if (key)
   %DSSText.Command = 'New fault.F1 bus1=loadbus1 phases=3'; 
   %for i=1:c
    DSSCircuit.CktElements(v{1,i}).Open(1,0);
    DSSCircuit.CktElements(v{1,i}).Open(2,0);
    line_loss = v{1,i};
   %end
   %line_loss11 = cell2mat(line_loss);
%    DSSCircuit.CktElements('line.L1').Open(1,0);
%    DSSCircuit.CktElements('line.L1').Open(2,0);
%    DSSCircuit.CktElements('line.L2').Open(1,0);
%    DSSCircuit.CktElements('line.L2').Open(2,0);
disp('calling solver');
   DSSSolution.Solve; %Solving the circuit with initial line removal
   my_Bus=DSSCircuit.AllBusNames; % accessing the voltages 
   num_Bus=DSSCircuit.NumBuses;
   iLines = DSSCircuit.FirstPDElement; % accessing the currents of each element
   j=1;
   while(iLines > 0 )
     current{j,1}=DSSCircuit.ActiveCktElement.Name;
     current{j,2}=DSSCircuit.ActiveCktElement.Currents;
     x= current{j,2};
     for k=1:3
       [i1, i2]=cart2pol(x(6+2*k-1),x(6+2*k));
       curMag{j,k}= i2;
     end;
     iLines = DSSCircuit.NextPDElement;
     j=j+1;
   end
   [row, col] = size(curMag);
   %DSSSolution.Solve;
   for k =1:row
       if (curMag{k,1} >= maxcurline_limit{k,1})
           DSSCircuit.CktElements(current{k,1}).Open(1,0);
           DSSCircuit.CktElements(current{k,1}).Open(2,0);
           line_loss1{k,1} = current{k,1};
       end
       DSSSolution.Solve;
       
   end
   %line_loss12 = cell2mat(line_loss1)
   TL = [line_loss; line_loss1]; % collecting line outages
   my_Bus=DSSCircuit.AllBusNames;
   num_Bus=DSSCircuit.NumBuses;
   iLines = DSSCircuit.FirstPDElement; 
   j=1;
   
   %accessing current magnitude for checking 
   while(iLines > 0 )
     current{j,1}=DSSCircuit.ActiveCktElement.Name;
     current{j,2}=DSSCircuit.ActiveCktElement.Currents;
     x= current{j,2};
     for k=1:3
       [i1, i2]=cart2pol(x(6+2*k-1),x(6+2*k));
       curMag{j,k}= i2;
     end;
     iLines = DSSCircuit.NextPDElement;
     j=j+1;
   end
    %end
    
    % resetting the simulation back to normal
    DSSText.Command = 'Compile "G:\saqib\open DSS\14bussystemwithtransformerasline.dss"';
    my_Bus=DSSCircuit.AllBusNames;
    num_Bus=DSSCircuit.NumBuses;
    iLines = DSSCircuit.FirstPDElement;
    j=1;
    
    % accessing the current values to check if the simulation is resetted
    % to normal
    while(iLines > 0 )
        current{j,1}=DSSCircuit.ActiveCktElement.Name;
        current{j,2}=DSSCircuit.ActiveCktElement.Currents;
        x= current{j,2};
        for k=1:3
            [i1, i2]=cart2pol(x(6+2*k-1),x(6+2*k));
            curMag{j,k}= i2;
        end;
        iLines = DSSCircuit.NextPDElement;
        j=j+1;
    end
    
    %Collecting total line outages
    Total_line_loss= TL;
    [rTL, cTL] = size(Total_line_loss);
    for j= 1:rTL
        TLL{j,1} = char(Total_line_loss{j,1});
    end
    Total_line_loss_data = vertcat(Total_line_loss_data, i, TLL);
    Total_line_loss_data1 = Total_line_loss_data(~cellfun('isempty',Total_line_loss_data));
     
end

end

