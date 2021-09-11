// Моя программа работает с целыми числами
#include <stdio.h> // заголовочный файл стардартного ввода / вывода


int main()
{
    int my_age; // int 32  bits = 4 bytes
    // Объявление перемнной
    my_age = 0; // Инициализация переменной

    unsigned int your_age = 0;

    unsigned int my_son = 10;


    //puts("Hello, World!");
    //printf("Hello, World!");

    my_age = 35;
    your_age = 25;
    printf("My age is %d\nYour age is %u\nMy son is %u\n ", my_age, your_age, my_son);
    // тип int соответсвтует %d
    // тип unsigned int %u
    // %d - спецификатор типа
    // \n - перевод на новую строку



    return 0;
}
