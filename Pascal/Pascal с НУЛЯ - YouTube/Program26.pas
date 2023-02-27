program Task_26;
var n, x, sum, chekingEven2, chekingEven5: integer;
begin 
  sum := 0;
  read(n);
  while n>0 do 
    begin
      read(x);
      chekingEven2 := x mod 2;
      chekingEven5 := x mod 5;
      if (chekingEven2=0) and (chekingEven5=0) then
        sum := sum+x;
      n := n-1;
    end;
  write('Сумма = ', sum);
end.