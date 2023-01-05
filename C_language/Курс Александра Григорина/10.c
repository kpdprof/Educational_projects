// Множественное присваивание

#include <stdio.h>

int main()
{
    int rub = 0; // Сумма моих рублей
    int euro = 0; // Сумма моих евро
    int dol = 0; unsigned int kron; unsigned int eni;

    rub = euro = dol = 0;

    int a, b, c, d, e, f, g; // Создаем переменные
    a = b = c = d = e = f = g = 0; // Множественное присваивание
    a = b = c = d = e = f = g = 4;

    printf("rub = %d\neuro = %d\ndollar = %d", rub, euro, dol);

    return 0;
}
