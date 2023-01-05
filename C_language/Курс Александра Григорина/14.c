// ��������� ������� ��� � ���� �������� ��� ����� � ������� �����
// char � int

#include <stdio.h>
#include <limits.h> // ����� ���������� ����, ��� ������ �������� ��������� CHAR_BIT


int main()
{
    /* ��� char - 8 ��� = 1 ����, 2^8 = 256 ���-�� ��������
    ��� char �� -128 �� 127
    ��� unsigned char �� 0 �� 255
    */
    printf("CHAR_MIN = %d\n", CHAR_MIN);
    printf("CHAR_MAX = %u\n\n", CHAR_MAX);

    printf("UCHAR_MAX = %u\n\n", UCHAR_MAX);

    /* ��� int - 32 ��� = 8 ����, 2^32 = 4 294 967 296 ���-�� ��������
    ��� int �� -2147483648 �� 2147483647
    ��� unsigned int �� 0 �� 4 294 967 295
    */
    printf("INT_MIN = %d\n", INT_MIN);
    printf("INT_MAX = %u\n\n", INT_MAX);

    printf("UINT_CHAR = %u\n", UINT_MAX);

    return 0;
}
