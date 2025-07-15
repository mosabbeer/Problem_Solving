#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    {
        long long int x,y;
        scanf("%lld %lld",&x,&y);
        if((x-y)>1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
