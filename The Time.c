#include<stdio.h>
int main()
{
    int a,b,c,sum,minute,div,min;
    scanf("%d:%d",&a,&b);
    scanf("%d",&c);
    sum=b+c;
    minute=sum%60;
 printf("%d",minute);
}
