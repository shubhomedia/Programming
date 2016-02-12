#include<stdio.h>
int main()
{
    int n,cal;

    printf("Enter the Number:\n");
    scanf("%d",&n);
    cal = n % 2;
    if(cal == 0)
    {
        printf("The Number You Enter %d is Even\n",n);
    }
    else
    {
        printf("The Number You Enter %d is Odd\n",n);
    }
    return 0;

}
