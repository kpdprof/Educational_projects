// ������� ����� � �����?
// CHAR_BIT = 8 - ���������

#include <stdio.h>
#include <limits.h> // ����� ���������� ����, ��� ������ �������� ��������� CHAR_BIT

// �������� �����  ��� ���������  ��������
#define INT_BIT	32 // ��� ��������� ������ ���-�� ��� � ���� int

int main()
{
    printf("Byte is %u bits\n", CHAR_BIT);
    printf("Int is %u bits", INT_BIT);
    return 0;
}
