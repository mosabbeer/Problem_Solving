#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,a[10000],j,count=0,min=999999999,max=-69,p=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]<min)
                min=a[i];
            if(a[i]>max)
                max=a[i];
                if(a[i]==1)
                    count++;
        }
        if(count>0)
            printf("%d\n",max);
        else
        {
          for(i=1;i<=n;i++)
          {
            if(a[i]%min!=0)
            {
                p=1;
                break;
            }
          }
          if(p==0)
            printf("%d\n",max/min);
          else
            printf("%d\n",max);
        }
    }
}
