#include<stdio.h>
int main()
{
    long long int x,count=0;
    scanf("%lld",&x);
    while(x>1)
    {
        if(x%2!=0)
        {
            x--;
            count++;
        }
        x=x/2;
    }
    printf("%lld",count+1);
}
