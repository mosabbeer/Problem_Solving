#include<stdio.h>
int main()
{
    int a[4],i,max,temp,d,b,c;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<4;i++)
    {
        if(max<a[i])
            max=a[i];
    }

    temp=a[3];
    a[3]=max;
    max=temp;

    d=a[3]-a[0];
    b=a[1]-d;
    c=a[2]-b;
    printf("%d %d %d",d,b,c);
    return 0;
}
