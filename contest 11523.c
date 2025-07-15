#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,k,l,p;
        scanf("%lld %lld %lld",&n,&k,&l);
        p=k*l;
        if(p==0)
            printf("Thiago\n");
        else
        {
            p=p-p%n;
            p=p/n;
            if(p%2!=0)
                printf("Thiago\n");
            else
                printf("Nathan\n");

        }
    }
}
