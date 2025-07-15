#include<stdio.h>
int main()
{
    long long int x,y,n,sum,p;
    scanf("%lld %lld %lld",&x,&y,&n);
    printf("%lld ",(x+y)/n);
    x=x%n;
    y=y%n;
    if(x+y<n)
        printf("0");
    else
    {
        if(x>=y)
            p=n-x;
        else
            p=n-y;
        printf("%lld",p);
    }
}
