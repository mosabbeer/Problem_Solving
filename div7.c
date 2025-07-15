#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        if(n%7==0)
            printf("%d\n",n);
        else
        {
        if(n<10)
            printf("7\n");
        else if(n>=10 && n<100)
        printf("14\n");
        else
            printf("105\n");
        }

    }
    return 0;
}
