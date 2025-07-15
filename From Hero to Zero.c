#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,k,count=0,p;
        scanf("%lld %lld",&n,&k);
        while(n>0)
        {
            if(n%k==0)
            {
                n=n/k;
                count++;
            }
            else
            {
                p=n%k;
                count=count+p;
                n=n-p;
            }
        }
        printf("%lld\n",count);
    }
}
