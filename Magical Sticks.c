#include<stdio.h>
int main()
{
    int n,t,i,p;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
            p=n/2;
        else if(n%2!=0)
            p=(n/2)+1;
        printf("%d\n",p);
    }
    return 0;
}
