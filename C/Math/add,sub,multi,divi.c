#include<stdio.h>
int main()
{
    int num1,num2,add,sub,multi,divi;

    printf("Enter 1st Number :");
    scanf("%d",&num1);
    printf("Enter 2nd Number :");
    scanf("%d",&num2);

    add = num1 + num2 ;
    sub = num1 - num2 ;
    multi = num1 * num2 ;
    divi = num1 / num2 ;
    printf("\nYour 1st Number : %d\n",num1);
    printf("Your 2nd Number : %d\n\n",num2);
    printf("%d + %d = %d\n",num1,num2,add);
    printf("%d - %d = %d\n",num1,num2,sub);
    printf("%d * %d = %d\n",num1,num2,multi);
    printf("%d / %d = %d\n",num1,num2,divi);

    return 0;

}
