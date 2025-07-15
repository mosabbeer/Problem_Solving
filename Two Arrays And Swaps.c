#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,m,j,k,a[100],b[100],temp,sum=0;
        scanf("%d %d",&n,&m);
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        for(j=0;j<n;j++)
            scanf("%d",&b[j]);
        for(j=0;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[j]>a[k])
                {
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }
        for(j=0;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(b[j]<b[k])
                {
                    temp=b[j];
                    b[j]=b[k];
                    b[k]=temp;
                }
            }
        }
        for(j=0;j<m;j++)
        {
            if(a[j]<b[j])
                a[j]=b[j];
        }
        for(j=0;j<n;j++)
            sum=sum+a[j];
        printf("%d\n",sum);
    }
}
