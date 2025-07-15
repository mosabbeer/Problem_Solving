#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long long int a,b,c,count=1,count1=1;
        scanf("%lld %lld %lld",&a,&b,&c);
        while(a%2==0)
        {
            a=a/2;
            count=count*2;
        }
        while(b%2==0)
        {
            b=b/2;
            count1=count1*2;
        }
        if(count*count1>=c)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
