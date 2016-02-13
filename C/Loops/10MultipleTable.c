#include<stdio.h>
int main()
{
    int number,multi;
    number = 10;
    multi  = 1;

    while (multi <= 10){
        printf("%d X %d =%d\n",number,multi,number*multi);
        multi++;
    }
    return 0;

}
