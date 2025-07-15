#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,p;
        scanf("%d",&n);
        if(n%2==0)
        {
            p=n/2;
            for(i=1;i<=p;i++)
                printf("1");
        }
        else
        {
            p=n-3;
            p=p/2;
              printf("7");
            for(i=1;i<=p;i++)
                printf("1");
        }
        printf("\n");
    }
}
