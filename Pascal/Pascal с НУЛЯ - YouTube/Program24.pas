program Task_24;
var n, x, sum: integer;
begin 
  sum := 0;
  read(n);
  while n>0 do 
    begin
      read(x);
      sum := sum+x;
      n := n-1;
    end;
  write('Сумма = ', sum);
end.