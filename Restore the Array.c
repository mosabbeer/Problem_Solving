#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[200000],p=0,q=0,i,n,c=1;
        scanf("%d",&n);
        scanf("%d %d",&a[1],&a[2]);
        if(a[1]<a[2])
        {
            c=1;
        }
        for(i=3;i<=n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i-1]<a[i] && a[i-1]<a[i-2])
            {
                p=a[i-1];
                q=1;
            }
        }
        if(c==1)
        {
            printf("0");
            for(i=1;i<=n;i++)
                printf(" %d",a[i]);
              //  printf("\n");
        }
        else
        {
        if(q==0)
        {
            for(i=1;i<=n;i++)
                printf("%d ",a[i]);
            printf("0");
        }
        else
        {
            for(i=1;i<=p;i++)
                printf("%d ",a[i]);
                printf("0");
            for(i=p+1;i<=n;i++)
                printf(" %d",a[i]);
               // printf("\n");
        }
        }
        printf("\n");

    }
    return 0;
}
