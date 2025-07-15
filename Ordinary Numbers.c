#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j,count=0,p,sum=0;
        scanf("%d",&n);
        p=n;
        while(n>9)
        {
            n=n/10;
            count++;
        }
        for(j=0;j<=count;j++)
            sum=sum+pow(10,j);
            sum=sum*n;
            if(sum>p)
                p=count*9+n-1;
            else
                p=count*9+n;
            printf("%d\n",p);
    }
}
