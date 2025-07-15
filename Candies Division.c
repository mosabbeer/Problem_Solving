#include<stdio.h>
#include<math.h>
int main()
{
    int test,i;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        long long int n,k,sum=1,p;
        scanf("%lld",&n);
        for(k=1;k<n;k++)
        {
           p=pow(2,k);
           sum=sum+p;
           if(n%sum==0)
            break;
        }
        p=n/sum;
        printf("%lld\n",p);
    }

    return 0;
}
