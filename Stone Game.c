#include<stdio.h>
int  main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a[1000],max=-999,min=9999999,i,j,p,q;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>max)
            {
                max=a[i];
                p=i;
            }
            if(a[i]<min)
            {
                min=a[i];
                q=i;
            }
        }
        if(p>q)
        {
            max=p;
            min=q;
        }
        else
        {
            max=q;
            min=p;
        }
        if(p<=n/2 && q<=n/2)
            printf("%d",max);
        else if(p>n/2 &&q>n/2)
            printf("%d",n+1-min);
        else
        {
            p=min+n-max+1;
            printf("%d",p);
        }
        printf("\n");
    }
}
