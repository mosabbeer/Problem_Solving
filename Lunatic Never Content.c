#include<stdio.h>
int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,a[100000],p,count=0,j,d,g;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
      if(n==1)
        printf("0");
      else if(n<4)
      printf("%d",a[n]-a[1]);
      else
      {
          for(i=1;i<=n/2;i++)
          {
              p=a[i]
          }
      }


    }
}
