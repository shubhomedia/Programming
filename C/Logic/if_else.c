#include<stdio.h>
int main()
{
    int n;

    printf("Enter the Value of N:\n");
    scanf("%d",&n);
    if(n >= 0)
    {
        printf("Note: The Number is Positive\n");
    }
    else
    {
        printf("The Number is Negative\n");
    }
    return 0;
	
}
