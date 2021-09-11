// „то будет, если присвоить беззнаковой переменной отрицательное значение?

#include <stdio.h>

int main()
{
    unsigned char number = -1; /* размре 1 байт, пределы от 0 до 255 */
    number = number - 1;
    printf("My\tnumber\tis\t%u\n", number); // \n - управл€юща€ последовательность

    unsigned int abc = -1;
    printf("abc\tis\t%u", abc);
    return 0;
}
