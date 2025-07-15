#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,j=1,a[200000],b[200000],i,k,p,q,sum=0,sum1=0;
        scanf("%lld %lld",&n,&k);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
            sum=sum+a[i];
        }
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(a[i]>a[j])
                {
                    p=a[i];
                    a[i]=a[j];
                    a[j]=p;
                }
            }
        }
        i=1;
        for(i=1;i<=n;i++)
        {
          b[i]=sum1+a[i];
          printf("%d ",b[i]);
        }
        printf("%lld\n",sum);
    }
}
