#include<stdio.h>
int main()
{
   int n,array[10000],i=0,num,p;
   scanf("%d",&n);
   p=n;
   num=n/2;
   printf("%d\n",num);

      for(i=0;i<=num-1;i++)
      {
          array[i]=2;
      }
    if(p%2!=0)
        array[num-1]=3;
   for(i=0;i<num;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
