// Работа с функциев printf()

#include <stdio.h>

int main()
{

    // Пример переполнения сверху (Overflow)
    unsigned char my_age = 255; // char = 8 бит = 1 байт, 2^8 состояний = 256, от 0 до 255
    my_age = my_age + 1; // к переменной my_age прибавить 1 и сохранить сумму в переменную my_age
    printf("My age is %u\n", my_age);

    // Пример переполнения снизу (Downflow)
    my_age = 0;
    my_age = my_age - 1;
    printf("My age is %u\n", my_age);

    /* Многосточный
    комментарий
    очень опасен  */

    return 0;
}

