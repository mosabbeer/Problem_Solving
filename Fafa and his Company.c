#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            count++;
    }
    printf("%d",count);
}
