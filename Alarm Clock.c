#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       long long int a,b,c,d,firstsleep,secondsleep,time,div;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        if(b>=a)
            printf("%lld\n",b);
        else if(a>b && d>=c)
            printf("-1\n");
        else if(a>b)
        {
            firstsleep=a-b;
            secondsleep=c-d;
            if(firstsleep%secondsleep!=0)
                div=firstsleep/secondsleep+1;
            else
                div=firstsleep/secondsleep;
            time=b+div*secondsleep+d*div;
            printf("%lld\n",time);
        }
    }
    return 0;
}
