#include<stdio.h>
int main()
{
    int a[100],n,p,q=0;
    scanf("%d",&n);
    if(n==1)
        printf("0");
    else
        {
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n-1;i++)
     {
        if(a[i+1]>a[i])
            p=a[i+1];
        else if(a[i+1]<=a[i])
            p=a[i];

     }
       for(int i=0;i<n;i++)
       {
           q=q+(p-a[i]);
       }
        printf("%d",q);
        }
        return 0;
}
