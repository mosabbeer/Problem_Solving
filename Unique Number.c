#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j,k,temp,b[11];
        scanf("%d",&n);
        if(n>45)
            printf("-1\n");
        else if(n<10)
            printf("%d\n",n);
        else
        {
            for(j=9;j>0;j++)
            {
               if(n>j)
               {
                   b[j]=j;
                   n=n-j;
               }
               else
                b[j]=0;
            }
            for(j=0;j<9;j++)
            {
                if(b[j]>0)
                    printf("%d ",b[j]);
            }
            printf("\n");
        }
    }
}
