// ��� �����, ���� ��������� ����������� ���������� ������������� ��������?

#include <stdio.h>

int main()
{
    unsigned char number = -1; /* ������ 1 ����, ������� �� 0 �� 255 */
    number = number - 1;
    printf("My\tnumber\tis\t%u\n", number); // \n - ����������� ������������������

    unsigned int abc = -1;
    printf("abc\tis\t%u", abc);
    return 0;
}
