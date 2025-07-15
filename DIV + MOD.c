#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long long int a,b,c,sum,j,p,q,d,n,mod,m;
        scanf("%lld %lld %lld",&a,&b,&c);
        p=a/c;
        q=b/c;
        d=c-1;
        mod=b%c;
        if(p==q)
            n=mod+p;
        else
        {
           n=(q-1)+c-1;
           m=q+mod;
           if(m>=n)
            n=m;
        }
        printf("%lld\n",n);
    }
    return 0;
}
