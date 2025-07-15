#include<stdio.h>
int main()
{
    int n,s=0,i,a,b,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        p=p+(b-a);
        if(p>s)
            s=p;
    }
    printf("%d",s);
    return 0;
}
