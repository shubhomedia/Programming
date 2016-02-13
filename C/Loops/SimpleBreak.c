#include<stdio.h>
int main()
{
    int number;

    number = 1;
    while(number <= 100)
    {
        printf("%d\n", number);
        number++;
        if (number > 10)
        {
            break;
        }
    }

    return 0;

}
