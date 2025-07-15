#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,x,p,q;
        scanf("%d %d",&n,&x);
        if(n<=2)
            printf("1\n");
        else
        {
            p=n-2;
            if(p%x==0)
               q=p/x+1;
            else
                q=p/x+2;
            printf("%d\n",q);
        }
    }
    return 0;
}
