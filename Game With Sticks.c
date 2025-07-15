#include<stdio.h>
int main()
{
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum=a*b;
    if(a==1||b==1)
        printf("Akshat");
    else
    {
    if(sum%2==0)
        printf("Malvika");
    else
        printf("Akshat");
    }
    return 0;
}
