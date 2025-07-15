#include<stdio.h>
int main()
{
   long long int n,a[100000],i,sum=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sum=sum+a[i];
        printf("%lld ",sum);
        if(a[i]<0)
            sum=sum-a[i];
    }

}
