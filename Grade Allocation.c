#include<stdio.h>
int main()
{
    int test,i;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        long long int n,k,j,a[100],sum=0;
        scanf("%lld %lld",&n,&k);
        for(j=0;j<n;j++)
            scanf("%lld",&a[j]);
         for(j=0;j<n;j++)
            sum=sum+a[j];
            if(sum>=k)
            printf("%lld\n",k);
            else
                printf("%lld\n",sum);

    }
    return 0;
}
