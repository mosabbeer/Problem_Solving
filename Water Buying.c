#include<stdio.h>
int main()
{
    int q,i;
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        long long int n,a,b,price=0,c;
        scanf("%lld %lld %lld",&n,&a,&b);
        c=2*a;
        if(n%2==0)
        {
            if(c>b)
                price=n*b/2;
            else
                price =n*a;
        }
        else if(n%2!=0)
        {
            if(c>b)
                price=(n-1)/2*b+a;
            else
                price=n*a;
        }
        printf("%lld\n",price);
    }
    return 0;
}
