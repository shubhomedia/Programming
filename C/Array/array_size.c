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

int main()
{
    int arraysize;
    printf("Enter your array size:\n");
    scanf("%d",&arraysize);
    int data[arraysize];
    int x = sizeof(data);
    printf("Size of the given array is %d\n", x/sizeof(int));

    for(int i = 0; i < arraysize; i++){
        scanf("%d", &data[i]);
    }
    for (int i = 0; i< arraysize; i++ ){
        printf("%d\n",data[i]);
    }


}
