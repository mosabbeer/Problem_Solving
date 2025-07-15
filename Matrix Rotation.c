#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a[2][2],min=0,max=0,j,k,p,q,r,s;
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
                scanf("%d",&a[j][k]);
        }
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                if(max<a[j][k])
                    max=a[j][k];
                if(min>a[j][k])
                    min=a[j][k];
            }
        }
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
                if(a[j][k]==max)
                {
                p=j;
               q=k;
               break;
                }
        }
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                if(a[j][k]==min)
                {
                    r=j;
                    s=k;
                }
            }
        }
        if((p==q) && (r==s))
           printf("YES\n");

           else if((p+q)==(r+s))
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
