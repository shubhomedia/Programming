#include <stdio.h>
#include <stdlib.h>

//Enter N Number and print from 1 to n number :
int recursion_function(int number){
    if(number < 1){
        return;
    }
    recursion_function(number - 1);
    printf("%d\n",number);
}

int fmain()
{
    int number;
    printf("Enter your num: ");
    scanf("%d",&number);
    recursion_function(number);
}