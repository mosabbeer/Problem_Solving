#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,p,j;
        scanf("%d",&n);
        p=0;
        for(j=1;j<=n;j++)
        {
            p++;
            if(j%3==0 || p%3==0)
                p++;
               if(j%10==3 || p%3==0)
                   p++;
        }
        printf("%d\n",p+n);
    }
}
