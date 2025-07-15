#include<stdio.h>
int main()
{
    int n,k,p,q=0,count=0;
    scanf("%d %d",&n,&k);
    p=240-k;
    for(int i=1;i<=n;i++)
    {
        q=q+i*5;
        if(q<=p)
            count++;
    }
    printf("%d",count);
    return 0;
}
