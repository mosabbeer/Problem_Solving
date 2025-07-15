#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,a[200000],max=-973549090707,i,j,count=0,min=4234098354,max1,p,q;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {

            scanf("%lld",&a[i]);
            if(a[i]>max)
            {
                max=a[i];
                p=i;
            }
            if(a[i]<min)
            {
                min=a[i];
                q=i;
            }
            if(a[i]<0)
                count++;

        }
        max1=a[1]*a[2];
        if(n<4)
        {
           for(i=1;i<n;i++)
           {
               for(int j=i+1;j<=n;j++)
               {
                   p=a[i]*a[j];
                   if(p>max1)
                    max1=p;
               }
           }
        }
        else
        {
            a[p]=a[q]=0;
        if(count<2)
        {
            for(i=1;i<=n;i++)
            {
                p=a[i]*max;
            if(p>max1)
                max1=p;
            }
        }
        else
        {
            for(i=1;i<=n;i++)
            {
                p=a[i]*max;
            if(p>max1)
                max1=p;
                p=a[i]*min;
            if(p>max1)
                max1=p;
            }
        }
        }
        printf("%lld\n",max1);
    }
}
