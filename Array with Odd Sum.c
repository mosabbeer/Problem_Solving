#include<stdio.h>
int main()
{
    int t,n,a[2000],i,sum,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int count=0,sum=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
            for(j=0;j<n;j++)
            {
                if(a[j]%2!=0)
                    sum++;
            }
            if(sum!=n && sum!=0)
            {
                if(n%2!=0)
                     printf("YES\n");
                else
                    printf("NO\n");
            }

            else
                printf("NO\n");

    }
    return 0;
}
