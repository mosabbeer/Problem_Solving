#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,c;
        long long int p;
        scanf("%d %d %d",&a,&b,&c);
        p=a+b*2+c*3;
        if(p%2==0)
            printf("0\n");
        else
            printf("1\n");
    }
}
