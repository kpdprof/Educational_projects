program Task_15;
var a, b: integer;
begin 
  writeln('Введите два целых числа: ');
  read(a, b);
  if a>b then
    begin
    write('Наибольшее число ', a);
    write('Наименьшее число ', b);
    end
  else
    begin
      writeln('Наибольшее число ', b);
      writeln('Наименьшее число ', a);
    end;
end.