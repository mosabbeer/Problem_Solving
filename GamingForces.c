#include<stdio.h>
int main()
{
    int n,i,j,p=0,count=0;
    scanf("%d",&n);
    int a[n],temp;
    for(i=0;i<n;i++);
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
            a[j]=0;
            p=a[i];
            }
        }
    }
    for(i=0;i<n;i++)
    {
     if(a[i]!=0)
     count++;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    count=count-1;
   p=p+count;
        printf("%d\n",n);

}
