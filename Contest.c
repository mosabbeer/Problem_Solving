#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
     long long int a,b,p;
     if(a<0)
        a=-1*a;
     if(b<0)
        b=-1*b;
     scanf("%lld %lld",&a,&b);
     p=a/b;
     if(p*b==a)
        printf("YES\n");
     else
        printf("NO\n");
    }
}
