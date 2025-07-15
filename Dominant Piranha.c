#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a[40000],max=-999,i,count=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>max)
                max=a[i];
        }
        for(i=1;i<=n;i++)
        {
            if(max==a[i])
                count++;
        }
        if(count==n)
            printf("-1\n");
        else
        {
        if(max==a[1] && a[1]>a[2])
        {
            printf("1\n");
        }
        else if(max==a[n]&& a[n]!=a[n-1])
        {
            printf("%d\n",n);
        }
        else
        {
            for(i=2;i<=n-1;i++)
            {
                if((a[i]>a[i-1])||(a[i]>a[i+1]))
                {
                    break;
                }
                printf("%d\n",i);
            }
        }
        }
    }
}
