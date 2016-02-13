#include<stdio.h>
int main()
{
    int number,multi;

    number = 5;
    for(multi = 1;multi <= 10; multi++)
    {
        printf("%d X %d =%d\n", number,multi,number*multi);
    }

    return 0;

}
