function [Total_line_loss, Total_line_loss_data1] = DSSStartuptest_reset5()

%Instantiate the OpenDSS Object
DSSObj = actxserver('OpenDSSEngine.DSS');

%Start the solver
DSSStart = DSSObj.Start(0);
if ~DSSStart
    disp('Unable to start the OpenDSS Engine');
else
    disp('OpenDSS Engine started successfully'); 
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
load_cur_mag={};
Total = [];
Total_line_loss_data={};
% line_loss={};
% line_loss1={};
% Total_line_loss=[];
% getting Currents associated to PD elements Only        
max = {};
v = {};
iLines = DSSCircuit.FirstPDElement;
j=1;

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

%writing threshold values to excel
xlswrite('Line_threshold_values_ieee14bus_system',maxcurline_limit,'sheet1','B1');
xlswrite('Line_threshold_values_ieee14bus_system',current,'sheet1','A1');
%disp('run successful');

%making the data type same 
[valuerowsize valuecolsize]= size(value);
for i = 1:valuerowsize
    v{1,i} = char(value{i,1})
end

% Disconnecting individual line from the subset 
[vrow vcol] = size(v);
for i= 1:vcol
    Total_line_loss=[];
    line_loss={};
    line_loss1={};
    TLL={};
    stagecounter = 1;
    %if (key)
   %DSSText.Command = 'New fault.F1 bus1=loadbus1 phases=3'; 
   %for i=1:c
    DSSCircuit.CktElements(v{1,i}).Open(1,0);
    DSSCircuit.CktElements(v{1,i}).Open(2,0);
    line_loss = v{1,i};
    Total_line_loss_counter = 1;
   %end
   %line_loss11 = cell2mat(line_loss);
%    DSSCircuit.CktElements('line.L1').Open(1,0);
%    DSSCircuit.CktElements('line.L1').Open(2,0);
%    DSSCircuit.CktElements('line.L2').Open(1,0);
%    DSSCircuit.CktElements('line.L2').Open(2,0);
   fprintf('OUTAGE SELECTION NUMBER %d \n',i);
   fprintf('-------------------------------------------------------------------------------------------------------------- \n');
   disp('calling solver');
   fprintf('%s taken out from the set for simulating the propagation of failure. \n',v{1,i});
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
   
   %checking and disconnecting overloaded lines for each element in the set
   overloadExists=1;
   load_disconnected = [];
   load_disconnected1 = [];
   fprintf('Running test for %s from the set. \n',v{1,i});
   fprintf('Stage %d, components failed- %s. \n',stagecounter,line_loss);
    while(overloadExists == 1)
       load_disconnected = [];
       overloadExists = 0;
       line_loss11={};
       line_loss12={};
       %This while loop will keep on running till there is even one line
       %with overload
       stagecounter = stagecounter + 1;
       for k =1:row
           if (curMag{k,1} >= maxcurline_limit{k,1})
               DSSCircuit.CktElements(current{k,1}).Open(1,0);
               DSSCircuit.CktElements(current{k,1}).Open(2,0);
               line_loss1{k,1} = current{k,1};
               line_loss11{1,k}= current{k,1};
               line_loss12{1,k} = line_loss11{1,k};
               overloadExists = 1;
               Total_line_loss_counter = Total_line_loss_counter + 1;
           end    
       end
%        [load_disconnected] = get_disconnected_loads();
%        load_disconnected1 = [load_disconnected1; load_disconnected]
%        [r_size c_size]= size(load_disconnected1);
%        for i = 1: r_size
%            get_load = cell2mat(load_disconnected1{i,1})
%        end
       %collecting line outages in stages
       empties = find(cellfun(@isempty,line_loss12));
       line_loss12(empties)=[];
       %line_loss13= line_loss12(~cellfun('isempty',line_loss12));
       %ll=cell2mat(line_loss13);
       [r_ll c_ll] = size(line_loss12);
       %printing the line outages in stages 
       if (r_ll ~= 0)
           fprintf('Stage %d, components failed-',stagecounter);
           for j = 1:c_ll
               fprintf('%s',' ',line_loss12{1,j});
           end
           fprintf('\n');
       end
       %searching for load loss
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
               load_loss{i,1} = load_current{i,1}
           end
       end
       %we run the solver to check if there are any more overloads
       DSSSolution.Solve;
       %Get the current values
       iLines = DSSCircuit.FirstPDElement; 
       j=1;
       %fprintf('Stage %d current values \n',stagecounter);
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
    end
   %calculating and printing the number of stages for the failure
   num_stagecounter = stagecounter - 1;
   fprintf('Number of stages of failure = %d \n',num_stagecounter);
   
   %printing the total number of lines lost while selecting a particular
   %line outage
   fprintf('Total number of lines lost = %d \n',Total_line_loss_counter);
   %line_loss12 = cell2mat(line_loss1)
  
   %Collecting total line outages
   TL = [line_loss; line_loss1]; 
   Total_line_loss= TL;
   [rTL, cTL] = size(Total_line_loss);
   for j= 1:rTL
       TLL{j,1} = char(Total_line_loss{j,1});
   end
   Total_line_loss_data = vertcat(Total_line_loss_data, i, TLL);
   
   %writing the Total line outages into excel
   Total_line_loss_data1 = Total_line_loss_data(~cellfun('isempty',Total_line_loss_data));
   xlswrite('Total_line_loss_data_values', Total_line_loss_data1);
   
   %get voltage values
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
    
    % accessing the current values to check if the simulation resets
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
end
end

