#include<stdio.h>
int main()
{
    long long int n,a[100000],i,min=10000000000,count=0,p;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]<min)
            min=a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==min)
        {
            p=i;
            count++;
        }
        if(count==2)
            break;
    }
    if(count==1)
        printf("%lld",p);
    else
        printf("Still Rozdil");
}
