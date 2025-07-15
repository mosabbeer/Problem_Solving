#include<stdio.h>
int main()
{
    int n,k,x[100],count=0,i,j,p;
    scanf("%d %d",&n,&k);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&x[i]);

    }
     for(i=1;i<=k;i++)
     {
         if(x[i]>0)
         count++;

     }
         if(x[k]!=0)
         {
        for(j=k+1,i=1;j<=n;j++)
        {
        if(x[j]==x[k])
            count++;
        }
        }
        if(x[1]<=0)
            count=0;
    printf("%d",count);

    return 0;


}
