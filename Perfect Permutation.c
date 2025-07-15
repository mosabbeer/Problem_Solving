#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    if(n%2!=0)
        printf("-1");
    else
    {
        for(j=1;j<=n;j++)
        {
            if(j%2==0)
                printf("%d ",j-1);
            else
                printf("%d ",j+1);
        }
    }
}
