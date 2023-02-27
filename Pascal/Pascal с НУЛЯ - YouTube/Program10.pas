program Task_10;
var a, b, c, S: integer;
begin 
  writeln('Введите длины ребер: ');
  read(a, b, c);
  S := 2 * (a*b + b*c + a*c);
  writeln('S=', S);
end.