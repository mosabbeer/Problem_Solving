#include<stdio.h>
int main()
{
    int n,i,count=0,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
            p=n/i;
            printf("%d*%d=%d\n",p,i,n);
        }
    }
    printf("number of divisor =%d",count);
}
