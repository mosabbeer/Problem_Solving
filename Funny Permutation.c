#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,p,i,a[200000],temp;
        scanf("%d",&n);
        p=n;
        if(n==3 || n==1)
            printf("-1");
        else
        {
            for(i=1;i<=n;i++)
            {
                a[i]=p;
                p--;
            }
            if(n%2!=0)
            {
                p=n/2+1;
                temp=a[p];
                a[p]=a[p+1];
                a[p+1]=temp;
            }
            for(i=1;i<=n;i++)
                printf("%d ",a[i]);
        }
        printf("\n");
    }
}
