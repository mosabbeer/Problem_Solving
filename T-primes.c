#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int p,q,i,count=2,d;
        scanf("%lld",&p);
        q=sqrt(p);
        if(p%2!=0)
        {
          if(q*q==p)
           {
            for(i=3;i<q;i=i+2)
            {
            if(p%i==0)
            {
                count++;
                d=p/i;
                if(d!=i)
                count++;
            }
            if(count>2)
                i=q+3;
            }
           }
           else
            count=5;
        }
        else
        {
            if(p==4)
                count=2;
                else
                    count=4;
        }
        if(p<3 )
            count=7;
        if(count==2)
            printf("YES\n");
        else if(count!=2)
            printf("NO\n");
    }
}
