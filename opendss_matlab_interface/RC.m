
function [Total_line_loss, Total_line_loss_data1] = RC(filename, lineList, faultSeq)
    %initialize open dss
    [DSSObj, DSSStart] = InitializeOpenDSS();
     if ~DSSStart
        disp('Unable to start the OpenDSS Engine')
        return;
     end
    
     nominal_cur={};
     total_lines_removed = {};
     for i = 1: length(faultSeq)
         %initialzie circuit
         InitializeCircuit(filename, DSSObj);
         [currentCkt, nominal_cur]=SolveAndGatherCurrentData(DSSObj);
         line_removed_seq = {};
         lines_removed_seq(j) = [faultLines(i)];
         RemoveLine(DSSObj, faultLines(i), lineList); 
         j=1; 
         [currentCkt, cur] = SolveAndGatherCurrentData(DSSObj);
         while(true)
             [linesremoved]= CheckAndRemoveOverloads(DSSObj,currentCkt, cur);
             if (isempty(linesremoved))
                 break;    
            end;
            j = j+1;
            lines_removed_seq(j) = linesremoved;
            [currentCkt, cur] = SolveAndGatherCurrentData(DSSObj);
        end;
        total_lines_removed{i} = lines_removed_seq;
    return;
end


function [DSSObj, DSSStart] = InitializeOpenDSS()
    DSSObj = actxserver('OpenDSSEngine.DSS');
    DSSStart = DSSObj.Start(0);
    return;
end 

function InitializeCircuit(filename, DSSObj)
    DSSText = DSSObj.Text;
    DSSText.Command = 'clear';
    cmdstr = sprintf('Compile  \"%s\"',filename);
    DSSText.Command = cmdstr;
    return;
end


function [current,curMag] = SolveAndGatherCurrentData(DSSObj)
    curMag={};
    DSSCircuit = DSSObj.ActiveCircuit;
    DSSSolution = DSSCircuit.Solution;
    DSSSolution.Solve;
    iLines = DSSCircuit.FirstPDElement;
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
   return;
end


function  RemoveLine(DSSObj, lineIndex, lineMap)
    DSSCircuit = DSSObj.ActiveCircuit;
    DSSCircuit.CktElements(lineMap{lineIndex}).Open(1,0);
    DSSCircuit.CktElements(lineMap{lineIndex}).Open(2,0);
end

function [linesremoved] = CheckAndRemoveOverloads(DSSObj,,currentCkt, cur)
   [row, col] = size(curMag);
   linesremoved= [];
   for k =1:row
       if (curMag{k,1} >= maxcurline_limit{k,1})
           DSSCircuit.CktElements(currentCkt{k,1}).Open(1,0);
           DSSCircuit.CktElements(currentCkt{k,1}).Open(2,0);
           linesremoved=[linesremoved currentCkt{k,1}];
       end
       
   end
   return;
end
   
   
   
