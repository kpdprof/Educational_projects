program C1;
var a,b,c,sum,p:integer;
sred:real;
begin 
  writeln('Введите три числа: ');
  read(a,b,c);
  sum:=a+b+c;
  p:=a*b*c;
  sred:=sum/3;
  writeln(a,'+',b,'+',c,'=',sum);
  writeln(a,'*',b,'*',c,'=',p);
  writeln('(',a,'+',b,'+',c,')/3=',sred);
end.