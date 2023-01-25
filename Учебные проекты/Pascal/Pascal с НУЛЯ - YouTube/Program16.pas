program Task_16;
var a, b, c, d, max: integer;
begin 
  writeln('Введите четыре целых числа: ');
  read(a, b, c, d);
  max := a;
  if b>max then
   max := b;
  if c>max then
   max := c;
  if d>max then
   max := d;  
  writeln('Наибольшее число ', max);
end.