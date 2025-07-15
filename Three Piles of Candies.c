#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long long int a,b,c,sum;
        scanf("%lld %lld %lld",&a,&b,&c);
        sum=(a+b+c)/2;
        printf("%lld\n",sum);
    }
}
