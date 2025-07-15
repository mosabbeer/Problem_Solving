#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,a[1000],sum=0,p,j;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
        {
            p=a[i];
            a[i]=0;
            sum=0;
            for(j=1;i<n;i++)
            {
               sum=sum^a[j];
            }
            if(sum==p)
                break;
        }
        printf("%d\n",p);
    }
}
