#include<stdio.h>
int main()
{
    int a,b[100],i,sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b[i]);
        sum=sum+3*b[i];
    }
    printf("%d",sum);
}
