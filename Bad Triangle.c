#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       long long int n,a[100000],j,sum,p=0;
        scanf("%d",&n);
        for(j=1;j<=n;j++)
            scanf("%lld",&a[j]);
        sum=a[1]+a[2];
        for(j=3;j<=n;j++)
        {
            if(a[j]>sum)
            {
                p=1;
                break;
            }
        }
        if(p==0)
            printf("-1\n");
        else
            printf("1 2 %lld\n",j);
    }
}
