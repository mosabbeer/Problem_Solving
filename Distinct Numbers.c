#include<stdio.h>
int main()
{
    int n,a[10000],i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j] && a[i]!=-9999999)
            {
                a[j]=-9999999;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==-9999999)
            count++;
    }
    printf("%d",n-count);
}
