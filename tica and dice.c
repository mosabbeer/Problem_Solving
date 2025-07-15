#include<stdio.h>
int main()
{
    int test,i;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        int n,sum1,sum2,a[100],j,p;
        scanf("%d%d%d",&n,&sum1,&sum2);
        a[0]=sum1-sum2;
        p=sum2%(n-1);
        for(j=1;j<n;j++)
        {
            a[j]=sum2/(n-1);
        }
        for(j=1;j<p;j++)
            a[j]=a[j]+1;
        for(j=0;j<n;j++)
            printf("%d ",a[j]);
        printf("\n");
    }
}
