#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j,a[55],min=100000000,sum=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        for(j=0;j<n;j++)
        {
            if(a[j]<min)
                min=a[j];
        }
        for(j=0;j<n;j++)
            sum=sum+a[j]-min;
        printf("%d\n",sum);
    }
    return 0;
}
