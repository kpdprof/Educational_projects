// ��� long long int - 64 ��� = 8 ���� (QWORD)

#include <stdio.h>
#include <limits.h> // ����� ���������� ����, ��� ������ �������� ��������� CHAR_BIT


int main()
{
    // ����� ������������ ���� lld ��� llu
    printf("LLONG_MIN = %lld\n", LLONG_MIN);
    printf("LLONG_MAX = %lld\n", LLONG_MAX);
    printf("ULLONG_MAX = %llu\n", ULLONG_MAX); // ULLONG_MAX 2^64-1
    printf("ULLONG_MAX = %llu\n", -1); // hack
    return 0;
}
