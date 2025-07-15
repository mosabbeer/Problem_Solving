#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n,count,p,i,j;
        scanf("%d %d",&m,&n);
        if(m%2==0)
            m++;
        for(i=m;i<=n;i=i+2)
        {
            count=0;
            p=sqrt(i);
            for(j=2;j<=p;j++)
            {
                if(i%j==0)
                    count++;
                if(count==1)
                    j=p+3;
            }
            if(count==0)
                printf("%d\n",i);
        }
        printf("\n");
    }
}
