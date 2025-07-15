#include<stdio.h>
#include<math.h>
int main()
{
   long long int n,a[1000000000000]={0},i,j,p;
    for(i=2;i<=1000000;i++)
    {
        for(j=2;i*j<=1000000000000;j++)
        {
            p=i*j;
            a[i*j-1]=1;
        }
    }
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        long long int x,y,p,q,s,k,r=0,d;
        scanf("%lld %lld",&x,&y);
        if(x>0 && a[y-1]==0)
            printf("-1\n");
        else if(x==0)
           printf("1 %lld\n",y);

       else
       {
         p=q=x/2;
         s=sqrt(y);
         if(x%2!=0)
            p=p+1;
         for(k=p+1;k<=s;k++)
         {
             if(y%k==0)
             {
                 d=y/k;
                 r=1;
                 break;
             }
         }
         if(r==0)
            printf("-1\n");
         else
         {
             if(k>=d)
             printf("%lld %lld\n",d,k);
             else
               printf("%lld %lld\n",k,d);
             printf("%lld %lld\n",p,q);
         }
       }
    }
}
