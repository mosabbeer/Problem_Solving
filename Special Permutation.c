#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j;
        scanf("%d",&n);
        for(j=2;j<=n;j++)
            printf("%d ",j);
            printf("1");
        printf("\n");
    }
    return 0;
}
