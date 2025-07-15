#include<stdio.h>
int main()
{
    int t,sum,i,count=0;
    scanf("%d %d",&t,&sum);
    for(i=0;i<t;i++)
    {
       int n;
        char str;
        scanf("%s %d",&str,&n);
        if(str=='+')
            sum=sum+n;
        else if(str=='-')
            sum=sum-n;
        if(sum<0)
        {
           sum=sum+n;
           count++;
        }
    }
    printf("%d %d",sum,count);
}
