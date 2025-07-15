#include<stdio.h>
int main()
{
    int p,n,i,j,d=0,x[10000],y[10000],min=0,temp1,temp2;
    scanf("%d %d",&p,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(x[j]<x[i])
            {
                temp1=x[j];
                x[j]=x[i];
                x[i]=temp1;
                temp1=y[j];
                y[j]=y[i];
                y[i]=temp1;
            }
        }
    }
    for(i=0;i<n;i++)
        {
            if(p>x[i])
            p=p+y[i];
        else
            d--;
        }
    if(d<0)
        printf("NO");
    else
        printf("YES");
}
