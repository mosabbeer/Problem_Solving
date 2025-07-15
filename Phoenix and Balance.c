#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long long int n,sum1=0,sum2=0,sum=0,j;
        scanf("%lld",&n);
        sum1=pow(2,n);
        for(j=1;j<=(n-1)/2;j++)
            sum1=sum1+pow(2,j);
            for(j=(n-1)/2+1;j<n;j++)
                sum2=sum2+pow(2,j);
            sum=sum1-sum2;
            printf("%lld\n",sum);
    }
    return 0;
}
