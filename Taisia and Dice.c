#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,s,r,a[100],p,temp,j,i;
        scanf("%d %d %d",&n,&s,&r);
        a[0]=s-r;
        a[1]=a[0]/(n-1);
        p=r-a[1];
        if(p>0)
        {
        for(i=2;i<n;i++)
        {
         a[i]=p/(n-2);
        }
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
}
