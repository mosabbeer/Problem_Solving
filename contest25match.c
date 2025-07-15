#include<stdio.h>
int main()
{
    long long int n,a[100000],b[100000],i,q;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(i=0;i<n;i++)
    {
       scanf("%lld",&b[i]);
    }
    scanf("%lld",&q);
    for (i=0;i<q;i++)
    {
       long long int x,y,j,count=0,k;
        scanf("%lld %lld",&x,&y);
        for(j=0;j<x;j++)
        {
            for(k=0;k<y;k++)
            {
                if(a[j]==b[k])
                {
                    count++;
                    k=y+3;
                }
            }
        }
        if(count==x)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
