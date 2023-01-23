program HW2;
var countBread, priceOneBread, countMilk, priceOneMilk, fullPrice: integer;
begin 
  writeln('Введите кол-во булок хлеба: ');
  read(countBread);
  writeln('Введите цену одной булки хлеба: ');
  read(priceOneBread);
  
  writeln('Введите кол-во бутылок молока: ');
  read(countMilk);
  writeln('Введите цену одной бутылки молока: ');
  read(priceOneMilk);
  
  fullPrice := countBread * priceOneBread + countMilk * priceOneMilk;
  
  writeln('За ', countBread, 'б хлеба и ', countMilk, 'б молока вы заплатите ', fullPrice, ' руб.');
end.