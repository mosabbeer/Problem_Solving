#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,c,d,x,y;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        x=a*c;
        y=b*d;
        if(x==y)
            printf("0\n");
        else if((x%y==0&& y!=0)||(y%x==0 && x!=0))
            printf("1\n");
        else
            printf("2\n");
    }
}
