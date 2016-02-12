#include<stdio.h>
int main()
{
    int n;

    printf("Enter the Mark:\n");
    scanf("%d",&n);
    if(n >= 80)
    {
        printf("Your GPA is A+ or Point 4.0 \n");
    }
    else if ( n >=75 && n < 80)
    {
        printf("Your GPA is A or Point 3.75 \n");
    }
    else if ( n >=70 && n < 75)
    {
        printf("Your GPA is A- or Point 3.50 \n");
    }
    else if ( n >=65 && n < 70)
    {
        printf("Your GPA is B+ or Point 3.25 \n");
    }
    else if ( n >=60 && n < 65)
    {
        printf("Your GPA is B or Point 3.00 \n");
    }
    else if ( n >=55 && n < 60)
    {
        printf("Your GPA is B- or Point 2.75 \n");
    }
    else if ( n >=50 && n < 55)
    {
        printf("Your GPA is C+ or Point 2.55 \n");
    }
    else if ( n >=45 && n < 50)
    {
        printf("Your GPA is C or Point 2.25 \n");
    }
    else if ( n >=40 && n < 45)
    {
        printf("Your GPA is D or Point 2.00 \n");
    }
        else if ( n < 40)
    {
        printf("Your Are Fail..Sorry \n");
    }
    return 0;

}
