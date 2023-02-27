program Task_27_HW;
var n, x, sum, chekingOdd, chekingOdd3: integer;
begin 
  sum := 0;
  read(n);
  while n>0 do 
    begin
      read(x);
      chekingOdd := x mod 2;
      chekingOdd3 := x mod 3;
      if (chekingOdd<>0) and (chekingOdd3=0) then
        sum := sum+x;
      n := n-1;
    end;
  write('Сумма = ', sum);
end.