program Task_12;
var a, h, min, sec: integer;
begin 
  write('Введите число секунд: ');
  read(a);
  h := a div (60*60);
  a := a mod (60*60);
  min := a div 60;
  sec := a mod 60;
  writeln(h, ' ч. ', min, ' мин. ', sec, 'c.');
end.