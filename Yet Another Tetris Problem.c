#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,a[1000],j,p,k,temp,count=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
       for(j=0;j<n-1;j++)
       {
           for(k=j+1;k<n;k++)
           {
               if(a[j]<a[k])
               {
                   temp=a[j];
                   a[j]=a[k];
                   a[k]=temp;
               }
           }
       }
       for(j=1;j<n;j++)
       {
           p=a[j-1]-a[j];
           if(p%2!=0)
            count++;
           if(count>0)
            break;
       }
       if(n==1)
        count=0;
       if(count==0)
        printf("YES\n");
       else
        printf("NO\n");
    }
    return 0;
}
