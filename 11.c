// Не инициализированные переменные

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c, d, e, f, g;
    c = 0; d = 0;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("%d %d %d %d %d\n", c, d, e, f, g);

    e = f + g;
    printf("e = %d", e);

    return 0;
}
