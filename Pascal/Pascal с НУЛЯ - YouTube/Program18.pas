program Task_18;
var a, b, c: integer;
begin 
  write('Возраст Антона: ');
  read(a);
  write('Возраст Бориса: ');
  read(b);
  write('Возраст Виктора: ');
  read(c);
  
  if a>b then
    if a>c then
    writeln('Антон старше всех');
  if b>a then
    if b>c then 
    writeln('Борис старше всех');
  if c>a then
    if c>b then
    writeln('Виктор старше всех');
  if a=b then
    if a=c then 
    writeln('Они одного возраста');
  if a=b then
    if a>c then
    writeln('Антон и Борис старше Виктора');
  if a=c then
    if a>b then
    writeln('Антон и Виктор старше Бориса');
  if b=c then
    if b>a then
    writeln('Борис и Виктор старше Антона');
end.