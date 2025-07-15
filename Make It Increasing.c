#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       long long int n,a[10000],i,count=0,k=0,j;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
            scanf("%lld",&a[i]);
       for(i=n-1;i>0;i--)
       {
           if(a[i]>=a[i+1])
           {
             while(a[i]>=a[i+1])
             {
                 a[i]=a[i]/2;
                 count++;
             }
           }
           if(a[i]==0 && i!=1)
           {
               count=-1;
               break;
           }
       }
       printf("%lld\n",count);
    }
}
