#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a[3],j,k,count=0,max=-999,p,temp;
        for(j=1;j<=3;j++)
        scanf("%d",&a[j]);
        for(j=1;j<=2;j++)
        {
            for(k=j+1;k<=3;k++)
            {
                if(a[j]<a[k])
                {
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }
        for(j=1;j<3;j++)
        {
            if(a[j]!=a[j+1])
                count++;
                if(max<a[j])
                   {
                       max=a[j];
                       p=j;
                   }
        }
        if(count==0)
        {
            if(a[1]%2==0)
                printf("YES\n");
                else
                    printf("NO\n");
        }
        else
        {
            a[p]=0;
            if(max-a[1]-a[2]-a[3]==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
}
