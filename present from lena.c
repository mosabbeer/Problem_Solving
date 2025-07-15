#include<stdio.h>
int main()
{
    int n,i,j,p=1,k;
    scanf("%d",&n);
    for(j=0;j<=n-1;j++)
    printf("  ");
    printf("\n");
    for(i=0;i<=n;i++)
    {
        for(k=0;k<=n-i-1;k++)
        printf("  ");
        for(j=0;j<=i;j++)
            printf("%d ",j);
            if(i>0)
            printf("%d",i-1);
        for(j=i-2;j>=0;j--)
            printf(" %d",j);
            printf("\n");
    }

    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<p;j++)
            printf("  ");
        for(j=0;j<=i;j++)
            printf("%d ",j);
            if(i>0)
            printf("%d",i-1);
        for(j=i-2;j>=0;j--)
            printf(" %d",j);
            printf("\n");
        p++;
    }
}
