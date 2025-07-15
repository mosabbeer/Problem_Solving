#include<stdio.h>
int main()
{
    int a,b,c,d[10],max=0,i;
    scanf("%d %d %d",&a,&b,&c);
    d[0]=a+b+c;
    d[1]=a*b*c;
    d[2]=(a+b)*c;
    d[3]=a*(b+c);
    d[4]=a*b+c;
    d[5]=a+b*c;
    for(i=0;i<6;i++)
    {
        if(max<d[i])
            a[i]=max;
    }
    printf("%d",max);
}
