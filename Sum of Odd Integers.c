#include<stdio.h>
int main()
{
    int test,i;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        if(n%2== 0  && k%2==0)
            printf("YES\n");
        else if(n%2!=0 && k%2!=0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
