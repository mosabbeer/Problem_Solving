#include<stdio.h>
int main()
{
    int t,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       int a,b,n,d,p,q;
       scanf("%d %d %d %d",&a,&b,&n,&d);
       if(n*a <=d)
       {
           p=d-n*a;
           if(p<=b)
           {
               printf("YES\n");
           }
           else
            printf("NO\n");
       }
       else if(n*a>=d)
       {
           j=0;
           p=n*a;
           while(p>d)
           {
               p=p-n;
               j++;
           }
           a=a-j;
           p=d-a*n;
           if(p<=b)
           {

            printf("YES\n");
           }
           else
            printf("NO\n");
       }
    }
    return 0;
}
