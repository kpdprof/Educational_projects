// Сколько битов в байте?
// CHAR_BIT = 8 - КОНСТАНТА

#include <stdio.h>
#include <limits.h> // чтобы компилятор знал, где искать значения константы CHAR_BIT

// ключевое слово  имя константы  значение
#define INT_BIT	32 // эта константа хранит кол-во бит в типе int

int main()
{
    printf("Byte is %u bits\n", CHAR_BIT);
    printf("Int is %u bits", INT_BIT);
    return 0;
}
