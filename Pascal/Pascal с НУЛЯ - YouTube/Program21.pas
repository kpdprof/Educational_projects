program Task_21;
var a: integer;
begin 
  writeln('Введите номер месяца: ');
  read(a);
  if (a=12) or ((a>=1) and (a<=2))  then
    writeln('Зима.');
  if (a>=3) and (a<=5) then
    writeln('Весна.');
  if (a>=6) and (a<=8) then
    writeln('Лето.');
  if (a>=9) and (a<=11) then
    writeln('Осень.');
  if (a<1) or (a>12) then
    writeln('Неверный номер месяца.');
end.