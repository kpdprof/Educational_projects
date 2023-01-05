// Приложение демонстрирует полезность инициализации переменных

#include <stdio.h>

int main()
{
    int dollar, euro, rubli; // 32 bits = 4 bytes

    dollar = 0;
    euro = 0;
    rubli = 0;

    printf("My dollar = %d\n", dollar);
    printf("My euro = %d\n", euro);
    printf("My rubli = %d", rubli);

    return 0;
}
