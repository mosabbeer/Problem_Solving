#include<stdio.h>
int main()
{
    int n,a[90000],i,min=0,max=0,p,q;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    min=a[2]-a[1];
    max=a[n]-a[1];
      printf("%d %d\n",min,max);
    for(i=2;i<=n-1;i++)
    {
        p=a[n]-a[i];
        q=a[i]-a[1];
        if(p>=q)
           max=p;
        else
        max=q;
        p=a[i]-a[i-1];
        q=a[i+1]-a[i];
        if(p<=q)
            min=p;
        else
            min=q;
        printf("%d %d\n",min,max);
        max=min=q=p=0;
    }
    min=a[n]-a[n-1];
    max=a[n]-a[1];
    printf("%d %d",min,max);
}
