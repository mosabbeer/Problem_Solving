#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, a[10000],b[10000],i,j,temp,max1=-99,max2=-99;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
            for(i=0;i<n;i++)
            {
                if(b[i]>a[i])
                {
                   temp=a[i];
                   a[i]=b[i];
                   b[i]=temp;
                }
            }
            for(i=0;i<n;i++)
            {
                if(a[i]>max1)
                    max1=a[i];
                if(b[i]>max2)
                max2=b[i];
            }
            printf("%d\n",max1*max2);
    }
}
