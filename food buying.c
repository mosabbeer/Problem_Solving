#include<stdio.h>
int main()
{
    int t,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        long long int n,p;
        scanf("%lld",&n);
        p=n;
        if(n<10)
            p=n;
        else
        {
       if(n%9!=0)
        p=n+n/9;
        else
            p=n-1+n/9;
        }
        printf("%lld\n",p);
    }
    return 0;
}
