#include<stdio.h>
#include <math.h>
int main()
{
    float a1,a2,b1,b2,calculation1,calculation2,calculation3,calculation4,final_result;
    scanf("%f %f",&a1,&b1);
    scanf("%f %f",&a2,&b2);
    calculation1=a2-a1;
    calculation2=b2-b1;
    final_result=sqrt((calculation1*calculation1)+(calculation2*calculation2));
    printf("%.4lf\n",final_result);

    return 0;
}
