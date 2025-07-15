#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,bin1=0,bin2=0,bin3,i=0,j=0,k=1,rem1,rem2,rem3,sum;
    scanf("%d %d",&a,&b);
    while(a!=0)
    {
        rem1=a%10;
        a=a/10;
        bin1=bin1+rem1*pow(2,i);
        i++;
    }
    while(b!=0)
    {
        rem2=b%10;
        b=b/10;
        bin2=bin2+rem2*pow(2,j);
        j++;
    }
    sum=bin1+bin2;
    while(sum!=0)
    {
        rem3=sum%2;
        sum=sum/2;
        bin3=bin3+rem3*k;
        k=k*10;
    }
    printf("%d",bin3);
    return 0;
}
