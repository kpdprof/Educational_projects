// ������� �������������� ����� ����

#include <stdio.h>
#include <limits.h> // ����� ���������� ����, ��� ������ �������� ��������� CHAR_BIT


int main()
{
    // ��� short (short int) - 16 ��� = 2 �����, 2^16 �������� = 65536 ��������
    // unsigned short (int) �� 0 �� 65535
    printf("SHRT_MIN = %d\n", SHRT_MIN);
    printf("SHRT_MAX = %u\n", SHRT_MAX);
    printf("USHRT_MAX = %u\n", USHRT_MAX);

    short int number = -40;

    // ��� long (long int) - 32 ��� = 4 �����, 2^32 �������� = 4 294 967 296 ��������
    // unsigned long (int) �� 0 �� 4 294 967 295
    printf("LONG_MIN = %lu\n", LONG_MIN);
    printf("LONG_MAX = %ld\n", LONG_MAX);
    printf("ULONG_MAX = %lu\n", ULONG_MAX);

    long longNumber = 222;

    return 0;
}
