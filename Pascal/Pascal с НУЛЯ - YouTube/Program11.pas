program Task_11;
var a, min, sec: integer;
begin 
  write('Введите число секунд: ');
  read(a);
  min := a div 60;
  sec := a mod 60;
  writeln(min, ' мин. ', sec, 'c.');
end.