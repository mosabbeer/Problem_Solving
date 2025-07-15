#include<stdio.h>
int main()
{
    int t,a,b,c,d;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && c>d)
    {
        if(a>d && c>b)
            printf("YES\n");
            else
                printf("NO\n");
    }
    else if(a>b && d>c)
    {
        if(a>c && d>b)
            printf("YES\n");
            else
                printf("NO\n");
    }
    else if(b>a && c>d)
    {
        if(b>d && c>a)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else if(b>a && d>c)
    {
        if(b>c && d>a)
            printf("YES\n");
            else
            printf("NO\n");
    }
    }
    return 0;
}
