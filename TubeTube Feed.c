#include<stdio.h>
int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
     {
        int n,t,a[200],b[200],i,count=0,max=-9999,p=0;
        scanf("%d %d",&n,&t);
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
            scanf("%d",&b[i]);
            for(i=1;i<=n;i++)
            {
                if(i>1)
                    a[i]=a[i]+i-1;
             if(a[i]<=t && b[i]>max )
             {
                max=b[i];
                p=i;
             }
              if(a[i]>t)
              count++;

            }
            if(count==n)
                printf("-1\n");
            else
                printf("%d\n",p);
     }
}
