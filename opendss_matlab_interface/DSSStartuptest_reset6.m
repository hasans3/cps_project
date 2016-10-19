function [Total_line_loss, Total_line_loss_data1] = DSSStartuptest_reset6(blackout_criterion, filepath, systemName)
% blackout_criterion in numbers
% complete path of the dss file
% name of topology


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

% ----------------- Code Added here for XML generation-----------%
cmd = strcat('Compile "', filepath);
cmd = strcat(cmd,'"');

%DSSText.Command = 'Compile "G:\saqib\open DSS\14bussystemwithtransformerasline.dss"';
DSSText.Command = cmd;

CaseStudy = systemName;
filename = strcat(CaseStudy, '.xml');

if exist(filename, 'file')
    delete(filename)
end
xmlObject = com.mathworks.xml.XMLUtils.createDocument('Contingencies');
xmlwrite(filename,xmlObject);    

myObject = xmlread(filename);
root_element = myObject.getDocumentElement;

%----------------------------------------------------------------%

% getting bus voltages
% my_Bus=DSSCircuit.AllBusNames;
% num_Bus=DSSCircuit.NumBuses;
j=1;
%DSSSolution.Solve;
curMag={};
curMag_normal={};
load_cur_mag={};
Total_line_loss_data={};
% line_loss={};
% line_loss1={};
% Total_line_loss=[];
% getting Currents associated to PD elements Only        
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
    line_loss1={};
    TLL={};
    stagecounter = 1;
    DSSCircuit.CktElements(v{1,i}).Open(1,0);
    DSSCircuit.CktElements(v{1,i}).Open(2,0);
    line_loss = v{1,i};
    Total_line_loss_counter = 1;

%    DSSCircuit.CktElements('line.L1').Open(1,0);
%    DSSCircuit.CktElements('line.L1').Open(2,0);
%    DSSCircuit.CktElements('line.L2').Open(1,0);
%    DSSCircuit.CktElements('line.L2').Open(2,0);
   fprintf('OUTAGE SELECTION NUMBER %d \n',i);
   fprintf('-------------------------------------------------------------------------------------------------------------- \n');
   disp('calling solver');
   fprintf('%s taken out from the set for simulating the propagation of failure. \n',v{1,i});
   
   
   % ----------------- Code Added here for XML generation-----------%
   my_path = myObject.createElement('Path');
   my_initial_outage = myObject.createElement('Initial_Stage');
   my_initial_outage_text = myObject.createTextNode(v{1,i});
   my_initial_outage.appendChild(my_initial_outage_text);
   my_path.appendChild(my_initial_outage);
   %-----------------------------------------------------------------%
   
   DSSSolution.Solve; %Solving the circuit with initial line removal
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
   fprintf('Running test for %s from the set. \n',v{1,i});
   fprintf('Stage %d, components failed- %s. \n',stagecounter,line_loss);
   
    my_cascading_outage = myObject.createElement('Cascading_Stage');
    final_stage_text = 'Safe';
    while(overloadExists == 1)
       overloadExists = 0;
       line_loss11={};
       line_loss12={};
       load_loss = {};
       
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

       %collecting line outages in stages
       empties = find(cellfun(@isempty,line_loss12));
       line_loss12(empties)=[];
       [r_ll c_ll] = size(line_loss12);
       %printing the line outages in stages 
       if (r_ll ~= 0)
            
           % ----------------- Code Added here for XML generation-----------%
            my_stage_num = myObject.createElement('Stage_Number');
            my_stage_num_text = myObject.createTextNode(num2str(stagecounter-1));
            my_stage_num.appendChild(my_stage_num_text);
           %-----------------------------------------------------------------%
            
           fprintf('Stage %d, components failed-',stagecounter);
           for j = 1:c_ll
               fprintf('%s',' ',line_loss12{1,j});
               
               % ----------------- Code Added here for XML generation-----------%
               my_outage = myObject.createElement('Outage');
               my_outage_text = myObject.createTextNode(line_loss12{1,j});
               my_outage.appendChild(my_outage_text);
               my_stage_num.appendChild(my_outage);
               %----------------------------------------------------------------%
               
           end
           fprintf('\n');
       end
       % ----------------- Code Added here for XML generation-----------%
        my_cascading_outage.appendChild(my_stage_num);
      %-----------------------------------------------------------------%
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
       for j = 1:row_load_cur_mag
           if (load_cur_mag{j,1} <= 1)
               load_loss{1,j} = load_current{j,1};
           end
       end
       %removing empty values
       empties1 = find(cellfun(@isempty,load_loss));
       load_loss(empties1)= [];
       %checking for blackout criterion
       [T_sys_load, load_loss_v, amt_load_loss]= load_maptest14bus1(load_loss);
       if ((amt_load_loss/T_sys_load)*100 >= blackout_criterion)
           stagecounter = stagecounter+1;
           fprintf('More than %d percent of the load has been lost \n',blackout_criterion);
           fprintf('System Blackout \n');
           fprintf('%f MW load has been lost out of %f MW total load \n',amt_load_loss, T_sys_load);
           final_stage_text = 'Blackout';
           break;
       end
       
    end
    
    % ----------------- Code Added here for XML generation-----------%
    my_path.appendChild(my_cascading_outage);
    my_final_stage = myObject.createElement('Final_Stage');
    my_final_stage_text = myObject.createTextNode(final_stage_text);
    my_final_stage.appendChild(my_final_stage_text);
    my_path.appendChild(my_final_stage);
    %----------------------------------------------------------------%
    
   %calculating and printing the number of stages for the failure
   num_stagecounter = stagecounter-1;
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
  
   % resetting the simulation back to normal
    DSSText.Command = cmd;
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
 % ----------------- Code Added here for XML generation-----------%
 root_element.appendChild(my_path);
 %----------------------------------------------------------------%
end
% ----------------- Code Added here for XML generation-----------%
xmlwrite(filename,myObject);
%----------------------------------------------------------------%
end

