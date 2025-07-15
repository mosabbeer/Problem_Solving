#include<stdio.h>
int main()
{
    int n,q,a[2000000],i,j,x,y,temp,sum,b[2000000];
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    while(q--)
    {
        sum=0;
        scanf("%d %d",&x,&y);
       for(i=1;i<=x;i++)
           b[i]=a[i];
           for(i=x;i>=0;i--)
           {
               sum=sum+b[i];
               y--;
               if(y==0)
                break;
           }
           printf("%d\n",sum);
    }
}
