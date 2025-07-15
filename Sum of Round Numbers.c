#include<stdio.h>
#include<math.h>
int main()
{
    int n,p,count=0;
    double a;
    scanf("%d",&n);
    p=n;
    while(p>9)
    {
        p=p/10;
        count++;
    }
    count=count+1;

    printf("%d %d\n",count,p);
    if(n>9999)
    {
       a=pow(p,count);
        n=n-a;
    }
    printf("%lf",a);
}
