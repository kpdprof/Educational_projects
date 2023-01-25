program Task_30;
var n, i, f: integer;
begin
  f := 1; 
  readln(n);
  for i:=1 to n do
    begin
      f := f*i ;
      writeln('Шаг ', i, '. ',f);
    end;
end.