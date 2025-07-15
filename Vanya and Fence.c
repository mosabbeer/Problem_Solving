#include<stdio.h>
int main()
{
    int n,h,a[100000],count=0,i;
    scanf("%d %d",&n,&h);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]<=h)
            count=count+1;
        else if(a[i]>h)
            count=count+2;
    }
    printf("%d",count);
    return 0;
}
