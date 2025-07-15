#include<stdio.h>
int main()
{
    long long int x,p=1;
    scanf("%lld",&x);
    while(p<x)
    {
        p=p*2;
    }
    if(p==x)
        printf("1");
   else
    {
        p=p/2;
        printf("%lld",x-p+1);
    }
}
