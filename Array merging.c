#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int min=90000000,max=-1,n,i,a[200000]={0},p,max1=99999999;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&p);
            a[p]++;
            if(p>max)
                max=p;
            if(p<min)
                min=p;
        }
        for(i=1;i<=n;i++)
        {
            scanf("%d",&p);
            a[p]++;
            if(p>max)
                max=p;
            if(p<min)
                min=p;
        }
        for(i=min;i<=max;i++)
        {
            if(a[i]<max1)
                max1=a[i];
        }
        printf("%d\n",max1);

    }
}
