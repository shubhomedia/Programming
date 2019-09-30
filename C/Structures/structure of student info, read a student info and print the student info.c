#include <stdio.h>
#include <stdlib.h>


struct Student
{
    char name[50];
    int id;
    char section[50];
}student;


int main()
{
    struct Student student1;
    printf("Enter student name:\n");
    scanf("%s",&student1.name);
    printf("Enter student ID:\n");
    scanf("%d",&student1.id);
    printf("Enter student Section:\n");
    scanf("%s",&student1.section);

    printf( "Student name : %s\n", student1.name);
    printf( "Student Id : %d\n", student1.id);
    printf( "Student Section : %s\n", student1.section);

    return 0;
}