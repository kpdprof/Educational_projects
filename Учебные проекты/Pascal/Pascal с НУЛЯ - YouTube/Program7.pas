program B1;
var a,b,c,sum,p:integer;
begin 
  writeln('Введите три числа: ');
  read(a,b,c);
  sum:=a+b+c;
  p:=a*b*c;
  writeln(a,'+',b,'+',c,'=',sum);
  writeln(a,'*',b,'*',c,'=',p);
end.