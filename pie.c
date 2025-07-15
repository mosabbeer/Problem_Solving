#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      int n,a[1000],i,p=0;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
          if(a[i]<0)
            p++;
      }
      for(i=1;i<=n-p;i++)
        printf("%d ",i);
      while(p!=0)
      {
          printf("%d ",n-p-1);
          p--;
      }
    }
}
