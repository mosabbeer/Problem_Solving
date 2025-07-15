#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,a[100],count=0,max=0,j,k;
        scanf("%d",&n);
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
       for(j=0;j<n-1;j++)
       {
           count=0;
           for(k=j+1;k<n;k++)
           {
               if(a[j]==a[k]&& a[j]!=-1)
               {
                   count++;
                   a[k]=-1;
               }
               if(max<count)
               {
                   max=count;
               }
           }
       }
       if(max==n-1)
       {
           if(n%2==0)
            printf("0\n");
           else
            printf("1\n");
       }
       else if(max*2>n)
       {
           if(max%2==0)
        printf("%d\n",n-max);
        else
            printf("%d\n",n-max-1);
       }
       else
        printf("%d\n",n-2*max);
    }
}
