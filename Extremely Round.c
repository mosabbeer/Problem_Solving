#include<stdio.h>
int main()
{
    int n,i,j,count=9,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
    if(n<10)
        count=n;
    else if(n>=10)
    {
        for(j=10;i<=n;j=j+10)
            count++;
    }
    printf("%d\n",count);
    }
    return 0;
}
