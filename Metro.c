#include<stdio.h>
int main()
{
    int n,a[1000],b[1000],i,s;
    scanf("%d %d",&n,&s);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
        scanf("%d",&b[i]);
    if(a[1]==0)
        printf("NO");
    else
    {
        if(a[s]==0&& b[s]==0)
            printf("NO");
        else if(a[s]==0)
        {
            if(a[n]==0 || b[s]==0)
                printf("NO");
            else
                printf("YES");
        }
        else
            printf("YES");
    }
}
