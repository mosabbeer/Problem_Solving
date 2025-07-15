#include<stdio.h>
int main()
{
    int t,a,b,p,c,d,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a%b==0)
            p=0;
        else if(a>b)
        {
            c=a/b;
            d=(c+1)*b;
            p=d-a;
        }
        else if(b>a)
            p=b-a;
        printf("%d\n",p);
    }
}
