#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,p,q,r;
        scanf("%d",&n);
       p=n/2;
       q=n/2-1;
       r=n-p-q;
       printf("%d %d %d\n",q,p,r);
    }
}
