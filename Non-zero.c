#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,a[1000],j,sum=0,count=0,p;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]==0)
                count++;
            sum=sum+a[j];
        }
        p=sum+count;
        if(p>0)
            printf("%d\n",count);
        else
        {
            p=1+p;
        printf("%d\n",count+p);
        }
    }
}
