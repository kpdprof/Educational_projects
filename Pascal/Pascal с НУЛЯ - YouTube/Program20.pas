program Task_20;
var a, b, c: integer;
begin 
  writeln('Введите рост трех спортсменов: ');
  read(a, b, c); {165 170 172} {172 170 165}
  if (a<b) and (b<c) or (a>b) and (b>c) then
    writeln('По росту')
  else
    writeln('Не по росту')
end.