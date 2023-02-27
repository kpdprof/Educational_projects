// òèï long long int - 64 áèò = 8 áàéò (QWORD)


#include <stdio.h>
#include <limits.h> // ÷òîáû êîìïèëÿòîð çíàë, ãäå èñêàòü çíà÷åíèÿ êîíñòàíòû CHAR_BIT


int main()
{
    // íóæåí ñïåöèôèêàòîð òèïà lld èëè llu
    printf("LLONG_MIN = %lld\n", LLONG_MIN);
    printf("LLONG_MAX = %lld\n", LLONG_MAX);
    printf("ULLONG_MAX = %llu\n", ULLONG_MAX); // ULLONG_MAX 2^64-1
    printf("ULLONG_MAX = %llu\n", -1); // hack
    return 0;
}
