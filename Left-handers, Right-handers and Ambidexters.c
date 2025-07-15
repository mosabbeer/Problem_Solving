#include<stdio.h>
int main()
{
    int a,b,c,p;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b)
    {
        if(c%2!=0)
            c--;
        printf("%d",a+b+c);
    }
    else if(a>b)
    {
        if(b+c<=a)
            printf("%d",2*(b+c));
        else
           {
               p=b+c-a;
               if(p%2!=0)
                p--;
               printf("%d",2*a+p);
           }
    }
    else
        {
        if(a+c<=b)
            printf("%d",2*(a+c));
        else
           {
               p=a+c-b;
               if(p%2!=0)
                p--;
               printf("%d",2*b+p);
           }
    }
}
