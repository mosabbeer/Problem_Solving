#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a[3],j,n,c=0;
        scanf("%d",&n);
        for(j=0;j<3;j++)
            scanf("%d ",&a[j]);
        for(j=0;j<3;j++)
        {
            if(a[j]==0)
                a[j]=n;
        }
        for(j=0;j<3;j++)
        {
            if(j+1==a[j])
                c++;
        }
        if(c==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
