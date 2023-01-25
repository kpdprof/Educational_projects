program Task_25;
var n, x, sum, chekingOdd: integer;
begin 
  sum := 0;
  read(n);
  while n>0 do 
    begin
      read(x);
      chekingOdd := x mod 2;
      if chekingOdd<>0 then
        sum := sum+x;
      n := n-1;
    end;
  write('Сумма = ', sum);
end.