#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,sum=0,i,p=0,j=0,sum1=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            p=pow(2,i);
            if(p==i)
                i=-i;
            sum=sum+i;
        }
        printf("%lld\n",sum);
    }
}
