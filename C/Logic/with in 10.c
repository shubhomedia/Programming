#include<stdio.h>
int main()
{
     int input ;

    printf("Enter the Character :\n");
    scanf("%d",&input);
    if(input <= 0 || input <= 10)
    {
        printf("The Number is With in 10 \n");
    }
    else
    {
        printf("The Number is no With in 10 \n");
    }
    return 0;

}
