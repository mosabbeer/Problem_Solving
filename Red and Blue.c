#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[1000]={0},b[10000]={0},i,j=1,n,m,sum=0,max=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        j=2;
        scanf("%d",&m);
        for(i=1;i<=m;i++)
        {
            scanf("%d",&b[i]);
        }
        if(n>m)
            m=n;
        for(i=1;i<=m;i++)
        {
            sum=sum+a[i];
            if(max<sum)
                max=sum;
        sum=sum+b[i];
            if(max<sum)
                max=sum;
        }
        printf("%d\n",max);
    }
}
