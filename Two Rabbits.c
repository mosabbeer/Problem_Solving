#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long long int x,y,a,b,dif,jum;
        scanf("%lld %lld %lld %lld",&x,&y,&a,&b);
        dif=y-x;
        jum=a+b;
        if(dif%jum==0)
            printf("%d\n",dif/jum);
        else
            printf("-1\n");
    }
}
