#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,n,temp,i;
        scanf("%d %d %d",&a,&b,&n);
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        for(i=1;i<=100;i++)
        {
            if(i%2!=0)
            {
                b+=a;
            }
            else
            {
                a+=b;
            }
            if(a>n || b>n)
                break;
        }
        printf("%d\n",i,a,b);
    }
}
