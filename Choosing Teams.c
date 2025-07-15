#include<stdio.h>
int main()
{
    int n,k,a[100000],i,count=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(5-a[i]>=k)
            count++;
    }
    printf("%d",count/3);
}
