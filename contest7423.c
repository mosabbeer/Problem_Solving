#include<stdio.h>
#include<math.h>
int main()
{
   long long int n,a,b,i=0,p,q,r,s=0,t=0;
    scanf("%lld %lld %lld",&n,&a,&b);
    p=a;
    while(p>0)
    {
        q=p%10;
        r=pow(n,i);
        i++;
        s=s+q*r;
        p=p/10;
    }
    i=0;
    p=b;
    while(p>0)
    {
        q=p%10;
        r=pow(n,i);
        i++;
        t=t+q*r;
        p=p/10;
    }
    s=s*t;
    printf("%lld",s);
}
