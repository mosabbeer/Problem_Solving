#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,p,c;
        scanf("%d",&n);
        if(n%2==0)
            printf("%d %d\n",n/2,n/2);
         else
        {
            c=n/2;
            if(c%2==0)
                c=c--;
          for(i=c;i>0;i=i-2)
          {
              p=n-i;
              if(p%i==0)
                break;
          }
          printf("%d %d\n",p,i);
        }
    }
}
