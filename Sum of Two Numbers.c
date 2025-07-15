#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long long int n,p,j,total=0,ntotal=0,nn=0,q=0,n1total=0,k=0;
        scanf("%lld",&n);
              p=n;
              while(p>9)
              {
                  total=total+p%10;
                  p=p/10;
              }
              total=total+p;
             if(total%2==0)
                total=total/2;
              for(j=1;j<n;j++)
              {
                  nn=n-total*j;
                  p=nn;
                  q=total*j;
                   ntotal=0;
                   n1total=0;
                  while(p>9 || q>9)
                  {
                      ntotal=ntotal+p%10;
                      p=p/10;
                      n1total=n1total+q%10;
                      q=q/10;
                  }
                  ntotal=ntotal+p;
                  n1total=n1total+q;
                  k=ntotal-n1total;
                  if(k<0)
                    k=-1*k;
                  if(k<=1)
                    break;
              }
              printf("%lld %lld\n",nn,total*j);
            }
        }

