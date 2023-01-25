program Task_22_HW;
var a, b: integer;
begin 
  write('Введите день недели: ');
  read(a);
  write('Введите время: ');
  read(b);
  if (a>=1) and (a<=5) and (b>18) and (b<=23) then
    writeln('Пришло время программировать')
  else
    writeln('Время не пришло');
end.