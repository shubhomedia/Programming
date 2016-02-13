#include<stdio.h>
int main()
{
    int number;

    number = 0;
    while(number < 100)
    {
        number = number + 1 ;
        if (number % 2 == 0)
        {
            continue;
        }
        printf("%d\n", number);

    }

    return 0;

}
