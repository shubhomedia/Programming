#include<stdio.h>
int main()
{
    int a,b,c,result;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
        {
        printf("%d Is gratest\n",a);
    }
    else if (b>a && b>c)
    {
        printf("%d Is gratest\n",b);
    }
    else {
        printf("%d Is gratest\n",c);
    }

    return 0;
}
