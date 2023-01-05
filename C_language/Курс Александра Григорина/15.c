// Изучаем дополнительные целые типы

#include <stdio.h>
#include <limits.h> // чтобы компилятор знал, где искать значения константы CHAR_BIT


int main()
{
    // тип short (short int) - 16 бит = 2 байта, 2^16 значений = 65536 значений
    // unsigned short (int) От 0 до 65535
    printf("SHRT_MIN = %d\n", SHRT_MIN);
    printf("SHRT_MAX = %u\n", SHRT_MAX);
    printf("USHRT_MAX = %u\n", USHRT_MAX);

    short int number = -40;

    // тип long (long int) - 32 бит = 4 байта, 2^32 значений = 4 294 967 296 значений
    // unsigned long (int) От 0 до 4 294 967 295
    printf("LONG_MIN = %lu\n", LONG_MIN);
    printf("LONG_MAX = %ld\n", LONG_MAX);
    printf("ULONG_MAX = %lu\n", ULONG_MAX);

    long longNumber = 222;

    return 0;
}
