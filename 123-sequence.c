#include<stdio.h>
int main()
{
    int n,a[10000000],i,c1=0,c2=0,c3=0, d[3];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            c1++;
        else if(a[i]==2)
            c2++;
        else
            c3++;
    }
    d[0]=c1;
    d[1]=c2;
    d[2]=c3;
    for(i=0;i<3;i++)
        printf("%d ",d[i]);
}
