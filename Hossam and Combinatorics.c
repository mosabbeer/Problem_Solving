#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j,a[1000000],max=0,min=1000000,c1=0,c2=0;
        long long int p;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        scanf("%d",&a[j]);
        for(j=0;j<n;j++)
        {
            if(max<a[j])
                max=a[j];
            else if(min>a[j])
                min=a[j];
        }
        for(j=0;j<n;j++)
        {
            if(min==a[j])
                c1++;
            if(max==a[j])
                c2++;
        }
        if(c1==n || c2==n)
            p=n*(n-1);
        else
            p=c1*c2*2;
        printf("%lld\n",p);
    }
    return 0;
}
