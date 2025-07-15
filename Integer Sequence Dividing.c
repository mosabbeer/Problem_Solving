#include<stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i;
    if(sum%2==0)
        printf("0");
    else
        printf("1");
}
