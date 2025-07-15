#include<stdio.h>
int main()
{
    int n,a[100],i,j,k,count=0,p,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d ",&a[i]);
    for(i=0;i<n-1;i++)
    {
        p=0;
        for(j=i+1;i<n;i++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                count++;
            }
            for(k=0;k<n-1;k++)
            {
                if(a[k]>=a[k+1])
                    p++;
            }
            if(p==n-1)
                break;
        }
    }
    printf("%d",count);
}
