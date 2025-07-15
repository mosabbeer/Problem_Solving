#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            printf("%d ",2*i);
        printf("\n");
    }
}
