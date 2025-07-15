#include<stdio.h>
int main()
{

  int t;
  scanf("%d",t);
  while(t--)
  {
      int n,k;
      scanf("%d %d",&n,&k);
      if(k==0)
      {
         if(n%2==0)
            printf("0\n");
         else
            printf("1\n");
      }
     else if(n<=k)
      {
          printf("%d\n",k-n);
      }
      else if(k<n)
        printf("0\n");
  }
}
