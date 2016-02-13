#include<stdio.h>
int main()
{
    int number1,number2;

    for (number1 = 1;number1 < 10; number1++ )
    {
        for (number2 = 1; number2 < 3; number2++)
        {
            printf("%d%d",number1,number1);

        }
        printf("\n",number1);
    }

    return 0;

}
