#include<stdio.h>
int main()
{
    int t,j;
   scanf("%d",&t);
   for(j=0;j<t;j++)
   {
    int n,a[1000000],sum=0,i,p=0,c1=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
        sum=sum+a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]==-1 && a[i+1]==-1)
            c1++;
        else if(a[i]==1 && a[i+1]==1)
            c++;
        if(c>0 && c1>0)
            break;
    }
    if(c1>0)
        sum=sum+4;
    else if(c1==0 && c>0)
        sum=sum-4;
    printf("%d\n",sum);
  }
  return 0;
}
