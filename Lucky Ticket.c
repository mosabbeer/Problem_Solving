#include<stdio.h>
int main()
{
    int t,i,n,sum=0,sum1=0,count=0;
    scanf("%d",&t);
    n=t/2;
    char str[100];
    scanf("%s",str);
    for(i=0;i<t;i++)
    {
        if(str[i]=='4'|| str[i]=='7')
            count++;
    }
    if(count!=t)
        printf("NO");
    else
    {
    for(i=0;i<n;i++)
    {
        sum=sum+(str[i]-48);
    }
    for(i=n;i<t;i++)
    {
        sum1=sum1+(str[i]-48);
    }
     if(sum==sum1)
        printf("YES");
     else
        printf("NO");
    }
}
