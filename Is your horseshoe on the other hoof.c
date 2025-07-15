#include<stdio.h>
int main()
{
    int a[4],b[3],i,j,k,sum=0,count=0;
    for (i=0;i<4;i++)
        scanf("%d",&a[i]);
    for(i=0;i<3;i++)
    {
        if(a[i]==0)
            continue;

        for(j=i+1;j<4;j++)
        {
            if(a[i]==a[j])
            {
              count++;
                a[j]=0;
            }
        }
    }
        printf("%d",count);
        return 0;
}
