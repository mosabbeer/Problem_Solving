#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,a[1000],j,sum=0,count=0,p=0,k;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            sum=sum+a[j];
            if(a[j]=-1)
            count++;
        }
        if(count==0)
        printf("%d\n",sum-4);
        else
        {
            for(j=0;j<n-1;j++)
            {
                for(k=j+1;k<n;k++)
                {

                    if(a[j]==-1 && a[k]==-1)
                    p++;
                }
            }
            if(p>0)
            printf("%d\n",sum+4);
            else if(p==0)
            printf("%d\n",sum);
            printf("%d\n",p);
        }
    }
}
