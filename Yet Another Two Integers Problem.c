#include<stdio.h>
int main()
{
    long long int a[100],b[100],i,n,p,q;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&a[i],&b[i]);
        p=0;
        q=0;
        if(a[i]>b[i])
        {
            p=a[i]-b[i];
            if(p%10==0)
                q=p/10;
            else
                q=(p/10)+1;
        }
        else if(b[i]>a[i])
        {
            p=b[i]-a[i];
            if(p%10==0)
                q=p/10;
            else
                q=(p/10)+1;
        }
        else if(a[i]==b[i])
            q=0;

        printf("%lld\n",q);
    }
    return 0;
}
