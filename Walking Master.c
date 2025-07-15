#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,c,d,sum1,sum;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
       if(d<b)
        printf("-1\n");
       else
       {
           sum1=d-b;
           a=a+sum1;
           if(a<c)
            printf("-1\n");
           else
           {
               sum=a-c;
               printf("%d\n",sum+sum1);
           }
       }
    }
}
