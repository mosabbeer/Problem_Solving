#include<stdio.h>
int main()
{
    long long int n,p;//learn about long long int
    scanf("%lld",&n);
    if(n%2==0)
        p=n/2;
    else if(n%2!=0)
        p=-(n/2)-1;
    printf("%lld",p);
    return 0;
}
