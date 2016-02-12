#include<stdio.h>
int main()
{
    int n;

    printf("Enter the Value of N:\n");
    scanf("%d",&n);
    if(n > 0)
    {
        printf("The Number is Positive\n");
    }
    else if( n < 0)
    {
        printf("The Number is Negative\n");
    }
    else if( n == 0)
    {
        printf("The Number is Zero\n");
    }
    return 0;

}
