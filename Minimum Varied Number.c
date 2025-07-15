#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
     {
    int n,i,j=0;
    int str[12],p,temp;
    scanf("%d",&n);
    for(i=9;i>0;i--)
    {
        if(n-i>=0)
        {
            str[j]=i;
            n=n-i;
            j++;
        }

    }
    p=j;
    for(i=0;i<p/2;i++)
    {
        temp=str[i];
        str[i]=str[p-1-i];
        str[p-1-i]=temp;

    }
    for(i=0;i<p;i++)
        printf("%d",str[i]);
        printf("\n");
   }
  return 0;
}
