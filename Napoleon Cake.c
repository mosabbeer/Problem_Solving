#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,a[400000],i,p,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>1)
        {
            p=a[i];
            for(j=i;j>=1;j--)
            {
                a[j]=1;
                p--;
                if(p==0)
                    break;
            }
        }
    }
    for(i=1;i<=n;i++)
    printf("%d ",a[i]);
    printf("\n");
    }

}
