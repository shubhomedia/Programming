#include <stdio.h>
#include <stdlib.h>
//Enter N Number and print from 1 to n number :

int main()
{
    int minimum,c,arraysize;
    printf("Enter your array size:\n");
    scanf("%d",&arraysize);
    int array[arraysize];
    printf("Enter Your %d Values:\n",arraysize);
    for(int i = 0; i < arraysize; i++){
        scanf("%d", &array[i]);
    }

    minimum = array[0];

    for (c = 1; c < arraysize; c++)
    {
        if (array[c] < minimum)
        {
           minimum = array[c];
        }
    }

    printf("Minimum element value is %d.\n",minimum);
    return 0;




    for (int i = 0; i< arraysize; i++ ){
        printf("%d\n",array[i]);
    }


}