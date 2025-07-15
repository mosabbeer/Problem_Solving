#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,a[30000],i;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]==1)
                a[i]=2;
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]%a[i]==0)
            {
                a[i+1]=a[i+1]+1;
            }
        }
        for(i=0;i<n;i++)
            printf("%lld ",a[i]);
        printf("\n");
    }
}
