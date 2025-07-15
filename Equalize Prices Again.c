#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,sum=0,a[10000],i,p;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            sum=sum+a[i];
        }
        p=sum/n;
        if(sum%n!=0)
            p++;
        printf("%lld\n",p);
    }
}
