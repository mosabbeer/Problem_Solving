#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,a,b,c,d,grine1,grine2,wight1,wight2,p=0;
        scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
        grine1=(a-b)*n;
        grine2=(a+b)*n;
        wight1=c-d;
        wight2=c+d;
       if(grine1>wight2 || grine2<wight1)
        printf("No\n");
       else
        printf("Yes\n");


    }
}
