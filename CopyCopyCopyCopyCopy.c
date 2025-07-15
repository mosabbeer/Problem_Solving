#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,a[i],j,k,count=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[j]==a[k])
                    count++;
                if(count>0)
                    break;
            }
        }
        if(count==0)
            printf("YES\n");
            else
            printf("NO\n");
    }
}
