#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long long int n,j,count=0;
        scanf("%lld",&n);
        while(n!=1)
        {
            if(n%3!=0)
            {
                count=-1;
                break;
            }
            if(n%6==0)
            {
                n=n/6;
                count++;
            }
            else
            {
                n=n*2;
                count++;
            }
        }
        printf("%lld\n",count);
    }
}
