#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a[1000],i,temp;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<=n;i=i+2)
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=-1*temp;
        }
        for(i=1;i<=n;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
}
