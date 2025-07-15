#include<stdio.h>
int main()
{
   int n,x,sum=1;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
    scanf("%d",&x);
   for(int j=1;j<=x;j++)
   {
    sum=sum*j;
   }
   printf("%d\n",sum);
   sum=1;
   }
    return 0;
}
