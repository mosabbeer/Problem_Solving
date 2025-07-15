#include<stdio.h>
int main()
{
    int a[10000],i,n,k=0,j;
    a[0]=a[1]=1;
    char str[1000];
    scanf("%d",&n);
    for(i=2;i<=16;i++)
    {
        a[i]=a[i-2]+a[i-1];
    }
    for(i=0;i<n;i++)
        str[i]='o';
    str[i]='\0';
   for(i=1;i<=16;i++)
   {
       if(a[i]>n)
       {
           break;
       }
       else
       {
           str[a[i]-1]='O';
       }
   }
    printf("%s",str);
}
