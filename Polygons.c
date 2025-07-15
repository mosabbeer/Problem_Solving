#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n<3)
        {
            printf("0\n");
        }
        n=(n-2)*180;
        printf("%d\n",n);
    }
}
