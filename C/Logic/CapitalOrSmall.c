#include<stdio.h>
int main()
{
    char input ;

    printf("Enter the Character :\n");
    scanf("%c",&input);
    if(input >= 'a' && input <= 'z')
    {
        printf("The Character is Small Latter\n");
    }
    else if (input >= 'A' && input <= 'Z')
    {
        printf("The Character is Capital Latter\n");
    }
    return 0;

}
