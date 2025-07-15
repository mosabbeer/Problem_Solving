#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       long long int a,b,c,p=0;
        scanf("%lld %lld %lld",&a,&b,&c);
        if((2*b-c>0) && (2*b-c)%a==0)
            p++;
        if(p<1)
        {
            if((2*b-a>0)&& (2*b-a)%c==0)
                p++;
        }
        if(p<1)
        {
            if( (a+c)%(2*b)==0)
                p++;
        }
        if(p>0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
