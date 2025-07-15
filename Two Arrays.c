#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        int n,a[1000],b[1000],k,j,temp,p=0,sum;
        scanf("%d",&n);
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
                if(b[j]>b[k])
                {
                    temp=b[j];
                    b[j]=b[k];
                    b[k]=temp;
                }
            }
        }
        for(j=0;j<n;j++)
        {
            sum=a[j]-b[j];
            if(sum!=0 || sum!=-1 || a[j]>b[j])
            {
                p=1;
                break;
            }
        }
        if(p==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
