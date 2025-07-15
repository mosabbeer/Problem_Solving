#include<stdio.h>
int main()
{
    long long int n,p,r,s;
    scanf("%lld %lld",&n,&p);
    if(n%2==0)
    {
        if(p<=n/2)
            r=2*p-1;
        else
        {
            r=2*(p-n/2);
        }
    }
    else
    {
        if(p<=n/2+1)
            r=2*p-1;
        else
            r=2*(p-n/2);
    }
    printf("%d\n",r);
}
