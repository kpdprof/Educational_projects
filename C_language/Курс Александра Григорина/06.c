// ������ � �������� printf()

#include <stdio.h>

int main()
{

    // ������ ������������ ������ (Overflow)
    unsigned char my_age = 255; // char = 8 ��� = 1 ����, 2^8 ��������� = 256, �� 0 �� 255
    my_age = my_age + 1; // � ���������� my_age ��������� 1 � ��������� ����� � ���������� my_age
    printf("My age is %u\n", my_age);

    // ������ ������������ ����� (Downflow)
    my_age = 0;
    my_age = my_age - 1;
    printf("My age is %u\n", my_age);

    /* ������������
    �����������
    ����� ������  */

    return 0;
}

