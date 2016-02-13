#include<stdio.h>
int main()
{
    int number1,number2,multi;

    number1 = 5;
    number2 = 0;

    for( multi = 1; multi <= 10; multi++)
    {
        number2 = number1 + number2;
        printf("%d X %d =%d\n", number1,multi,number2);
    }

    return 0;

}
