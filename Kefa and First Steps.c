#include<stdio.h>
int main()
{
    int n,a[100000],p,q=1,r,i,max=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            p=i+1;
            r=p-q;
            q=i+1;
        }
        if(max<r)
            max=r;
    }
    if(n-q>max)
        max=n-q;
    printf("%d",max);
}
