#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("1 3");
            for(i=1;i<=n-2;i++)
                printf(" 2");
        }
        else
        {
            for(i=1;i<=n;i++)
                printf("1 ");
        }
        printf("\n");
    }
}
