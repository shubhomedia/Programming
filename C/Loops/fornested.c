#include<stdio.h>
int main()
{
    int number1,number2;

    for (number1 = 1; number1 <= 20; number1++)
    {
        for (number2 = 1; number2 <=20; number2++)
        {
            printf("%d X %d = %d\n",number1,number2,number1*number2);

        }
    }

    return 0;

}
