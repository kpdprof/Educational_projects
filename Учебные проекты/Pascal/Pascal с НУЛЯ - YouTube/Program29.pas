program Task_29;
var i: integer;
begin 
  for i:=100 to 999 do
    if (i mod 15 = 11) and (i mod 11 = 9) then
    writeln(i);
end.