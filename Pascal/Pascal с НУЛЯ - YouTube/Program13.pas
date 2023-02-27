program Task_11;
var a, start, timeCurrent, timeClass, timeCurrentInHour, timeCurrentInMin: integer;
begin 
  write('Введите номер урока: ');
  read(a);
  start := 8 * 60 + 30;
  timeClass := a * 45 + (a-1) * 10;
  timeCurrent := start + timeClass;
  timeCurrentInHour := timeCurrent div 60*60;
  timeCurrentInMin := timeCurrent mod 60*60;
  writeln(timeCurrent);
  writeln(timeCurrentInHour, '-', timeCurrentInMin);
end.