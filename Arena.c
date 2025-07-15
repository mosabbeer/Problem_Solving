#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a[12000],i,temp,j,count=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n-1;i++)
        {
            for(j=i;j<n;j++)
            {
                if(a[j]>a[i])
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                a[i]=a[i+1]=0;
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
                count++;
        }
        printf("%d\n",count);
    }
}
