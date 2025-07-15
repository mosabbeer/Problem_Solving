#include<stdio.h>
int main()
{
    int t,n,r,s,sum1,sum2;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        sum1=0,sum2=0;
        scanf("%d",&n);
        for(int i=0;i<3;i++)
        {
            r=n%10;
            sum1=sum1+r;
            n=n/10;
        }
        for(int i=0;i<3;i++)
        {
            s=n%10;
            sum2=sum2+s;
            n=n/10;
        }
        if(sum1==sum2)
            printf("yes\n");
        else if(sum1!=sum2)
            printf("no\n");
    }
    return 0;
}
