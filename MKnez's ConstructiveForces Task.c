#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d ",&t);
    for(i=0;i<t;i++)
    {
        int n,j,a[1005],sum1,sum2=0;
        scanf("%d",&n);
        if(n%2==0)
        {
            for(j=0;j<n;j=j+2)
            {
                a[j]=1;
                a[j+1]=-1;
            }
        }
        else
        {
            for(j=0;j<n;j=j+2)
            {
                a[j]=n/2-1;
                a[j+1]=-n/2;
            }
        }
            sum1=a[0]+a[1];
            for(j=0;j<n;j++)
                sum2=sum2+a[j];
           if(sum1==sum2 && n!=3)
           {
               printf("YES\n");
            for(j=0;j<n;j++)
            {
                printf("%d ",a[j]);
            }
            printf("\n");
           }
           else
            printf("NO\n");

    }
    return 0;
}
