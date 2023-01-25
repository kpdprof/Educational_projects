program Task_23;
var count: integer;
begin 
  write('Сколько раз повторить? ');
  read(count);
  while count>0 do 
    begin
      writeln('Привет!');
      count := count-1;
    end;
end.