#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,a[10000],j,count=0,cOdd=0,cEven=0,p;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(j%2!=a[j]%2)
                count++;
            if(a[j]%2!=0)
                cOdd++;
            else if(a[j]%2==0)
                cEven++;
        }
       p=cEven-cOdd;
       if(p>1 || cOdd>cEven)
        printf("-1\n");
       else
        printf("%d\n",count/2);
    }

}
