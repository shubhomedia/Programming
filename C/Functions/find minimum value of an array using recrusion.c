int rec(int a[],int n)
{
    int min;

    if(n==1)
        return a[0];

    else {
        min=rec(a,n-1);

        if(min<a[n-1])
            return min;
        else
            return a[n-1];
    }

} 

void main()
{
    int i,j,n,a[20];
    printf("enter n :");
    scanf("%d",&n);
    printf("enter values : ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);  
    }

    printf("\n%d",rec(a,n));

    getch();
}