#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long long int n,sub,j,count=0,p;
        scanf("%lld",&n);
        j=n;
        while(j>9)
        {
            count++;
            j=j/10;
        }
        p=pow(10,count);
        sub=n-p-1;
        printf("%lld\n",sub);
    }
    return 0;
}
