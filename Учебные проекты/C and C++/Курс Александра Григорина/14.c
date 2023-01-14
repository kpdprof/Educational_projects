// Программа выводит мин и макс значение для целых и базовых типов
// char и int

#include <stdio.h>
#include <limits.h> // чтобы компилятор знал, где искать значения константы CHAR_BIT


int main()
{
    /* тип char - 8 бит = 1 байт, 2^8 = 256 кол-во значений
    тип char от -128 до 127
    тип unsigned char от 0 до 255
    */
    printf("CHAR_MIN = %d\n", CHAR_MIN);
    printf("CHAR_MAX = %u\n\n", CHAR_MAX);

    printf("UCHAR_MAX = %u\n\n", UCHAR_MAX);

    /* тип int - 32 бит = 8 байт, 2^32 = 4 294 967 296 кол-во значений
    тип int от -2147483648 до 2147483647
    тип unsigned int от 0 до 4 294 967 295
    */
    printf("INT_MIN = %d\n", INT_MIN);
    printf("INT_MAX = %u\n\n", INT_MAX);

    printf("UINT_CHAR = %u\n", UINT_MAX);

    return 0;
}
