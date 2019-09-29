#include<stdio.h>
int main()
{
    char name[100];
    double salary,sale,total_sale,bonus,result;
    scanf("%s",name);
    scanf("%lf %lf",&salary,&total_sale);
    bonus=(total_sale*15.00/100.00);
    result= salary + bonus;
    printf("TOTAL = BDT: %.2lf\n",result);

    return 0;
}
