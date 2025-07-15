#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long long int n,j,p,q;
        int count=0;
        scanf("%lld",&n);
        if(n%2!=0)
            printf("YES\n");
        else
        {
            p=sqrt(n);
            for(j=3;j<=p;j=j+2)
            {
                if(n%j==0)
                   {
                       count++;
                   }
                   if(count==1)
                    break;
            }
            if(count==1)
                printf("YES\n");
            else
                printf("NO\n");

        }
    }

}
