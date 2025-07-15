#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,a[1001],j,c2=0,div,c1=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        scanf("%d",&a[j]);
        for(j=0;j<n;j++)
        {
            if(a[j]==2)
                c2++;
        }
        div=c2/2;
        if(c2%2!=0)
            printf("-1\n");
        else
        {
            if(c2==0)
                printf("1\n");
            else
            {
                for(j=0;j<n;j++)
                {
                    if(a[j]==2)
                       c1++;
                    if(c1==div)
                        break;
                }
                printf("%d\n",j+1);
            }
        }

    }
    return 0;
}
