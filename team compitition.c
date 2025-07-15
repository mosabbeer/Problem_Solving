#include<stdio.h>
int main()
{
    long long int a,b,t,team,d,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
       scanf("%lld %lld",&a,&b);
       if(a==b)
            team=(a+b)/4;
       else if(a>b)
       {
           d=a/b;
           if(d<3)
            team=(a+b)/4;
           else
            team=b;
       }
       else if(a<b)
       {
           d=b/a;
           if(d<3)
            team=(a+b)/4;
           else
            team =a;
       }
       printf("%lld\n",team);
    }
    return 0;
}
