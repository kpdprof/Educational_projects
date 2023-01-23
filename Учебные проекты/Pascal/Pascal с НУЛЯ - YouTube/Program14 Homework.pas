program Task_14_HW;
var a, h, min, sec: integer;
begin 
  write('Введите продолжительность фильма в минутах: ');
  read(a);
  h := a div 60;
  min := a mod 60;
  writeln('Фильм идет ', h, ' ч. ', min, ' мин.');
end.