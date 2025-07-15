#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[100000],count=1;
   for(i=0;i<n;i++)
   {
        scanf("%d\n",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
       if(a[i]!=a[i+1])
        count++;
   }
   printf("%d\n",count);
}

