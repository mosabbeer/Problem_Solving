#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,x,y,p,q,n;
        scanf("%d %d %d %d %d",&a,&b,&c,&x,&y);
        p=x-a;
        q=y-b;
        if(p<=0)
            p=0;
        if(q<=0)
            q=0;
        n=c-p-q;
        if(c>=0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
