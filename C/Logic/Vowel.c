#include<stdio.h>
int main()
{
    char input ;

    printf("Enter the Character :\n");
    scanf("%c",&input);
    if(input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' ||
            input == 'A' ||input == 'E' ||input == 'I' ||input == 'O' ||input == 'U' )
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }
    return 0;

}
