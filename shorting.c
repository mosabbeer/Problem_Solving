#include<stdio.h>
int main()
{
    int n,a[200],i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
                temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
