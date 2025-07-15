#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    if(a<b)
        c=a;
    else if(b<a)
        c=b;
    d=a-b;
    if(d<0)
        d=(-1*d)/2;
    else
        d=d/2;
    if(a==0 && b==0)
    {
        c=0;
        d=0;
    }
        printf("%d %d",c,d);
        return 0;

}
