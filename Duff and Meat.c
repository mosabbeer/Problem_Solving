#include<stdio.h>
int main()
{
    int n,a[10000],b[10000],p[10000]={0},i,j,sum=0,sum1=0,q=0,d=2;
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        p[0]=p[0]+a[i]*b[i];
        p[1]=p[1]+b[i];
    }
    for(j=1;j<=n;j++)
    {
    q=q+a[j]*b[j];
     for(i=j+1;j<=n;i++)
     {
       p[d]=q+(n-a[i])
     }
    }
}
