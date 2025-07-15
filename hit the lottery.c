#include<stdio.h>
int main()
{
    int n,p,count=0;
    scanf("%d",&n);

    if(n>=100)
    {
        p=n/100;
        for(int i=1;i<=p;i++)
        {
            n=n-100;
            count++;
        }
    }

    if(n>=20 && n<100)
    {
         p=n/20;
        for(int i=1;i<=p;i++)
        {
            n=n-20;
            count++;
        }
    }

    if(n>=10 && n<20)
    {
        p=n/10;
        for(int i=1;i<=p;i++)
        {
            n=n-10;
            count++;
        }
    }

    if(n>=5 && n<10)
    {
         p=n/5;
        for(int i=1;i<=p;i++)
        {
            n=n-5;
            count++;
        }
    }

         count=count+n;


    printf("%d",count);
        return 0;
}
