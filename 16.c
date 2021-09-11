// тип long long int - 64 бит = 8 байт (QWORD)

#include <stdio.h>
#include <limits.h> // чтобы компил€тор знал, где искать значени€ константы CHAR_BIT


int main()
{
    // нужен спецификатор типа lld или llu
    printf("LLONG_MIN = %lld\n", LLONG_MIN);
    printf("LLONG_MAX = %lld\n", LLONG_MAX);
    printf("ULLONG_MAX = %llu\n", ULLONG_MAX); // ULLONG_MAX 2^64-1
    printf("ULLONG_MAX = %llu\n", -1); // hack
    return 0;
}
