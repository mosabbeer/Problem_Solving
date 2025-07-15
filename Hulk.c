#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n==1)
    printf("I hate it");
    else if(n>1)
    {
        for(i=1;i<=n-1;i++)
        {
            if(i%2!=0)
            printf("I hate that ");
            else if(i%2==0)
                printf("I love that ");
        }
    if(i%2!=0)
    printf("I hate it");
    else
    printf("I love it");
    }
    return 0;
}
