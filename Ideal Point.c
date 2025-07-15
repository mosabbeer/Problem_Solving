#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,k,j,count=0,a,b;
        scanf("%d %d",&n,&k);
        for(j=0;j<n;j++)
        {
            scanf("%d %d",&a,&b);
            if(k==b)
                count++;
        }
        if(count>0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
