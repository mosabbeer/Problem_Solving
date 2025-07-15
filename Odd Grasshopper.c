#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,x,p;
        scanf("%lld %lld",&n,&x);
        if(x%4==1)
            p=x/4+1;
        else if(x%4==0)
            p=x/4+x+1;
        else if(x%4==3)
            p=x/4+2*x;
        else
            p=
    }
}
