#include<stdio.h>
int main()
{
    int n,count=0,j,count0=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
                count0++;
        }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]!= 0)
            {
                if(a[j]!=0)
                {
                    if(a[i]==a[j])
                        count++;
                        a[j]=0;
                }
            }
        }
    }
    printf("%d",n-count-count0);
}
