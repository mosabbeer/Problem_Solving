#include<stdio.h>
int main()
{
    int n,p,q;
    scanf("%d",&n);
    p=9;
    q=n-p;
    if(q%2!=0)
    {
        q=q+1;
        p=p-1;
    }
    printf("%d %d",p,q);
}
