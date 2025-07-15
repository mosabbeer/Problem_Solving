#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,n,m,i,sum=0;
        scanf("%d %d %d",&x,&n,&m);
        m=m*10;
        if(x-m==0)
            printf("YES\n");
        else
        {
        for(i=0;i<n;i++)
        {
            x=x/2+10;
            if(x<=m)
            {
                sum=1;
                break;
            }
        }
        if(sum==1)
            printf("YES\n");
        else
            printf("NO\n");
        }
    }
}
