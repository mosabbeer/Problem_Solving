#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,x,y,sum=0,p=0,q=0;
        scanf("%lld %lld %lld %lld",&a,&b,&x,&y);
        if(b>2*a)
            sum=(x+y)*a;
        else
        {
            if(x>=y)
            {
                p=x-y;
                q=y;
            }
            else
            {
                p=y-x;
                q=x;
            }
            sum=p*a+q*b;
        }
        printf("%lld\n",sum);
        printf("%lld %lld\n",p,q);
    }
}
