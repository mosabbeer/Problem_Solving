#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a[1000],i,p=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            a[i]=a[i]%2;
        }
        for(i=1;i<n-1;i=i+2)
        {
            if(a[i]!=a[i+2])
            {
                p=1;
                break;
            }
        }
        for(i=2;i<n-1;i=i+2)
        {
            if(a[i]!=a[i+2])
            {
                p=1;
                break;
            }
        }
    if(p==1)
        printf("NO\n");
    else
        printf("YES\n");
    }
}
