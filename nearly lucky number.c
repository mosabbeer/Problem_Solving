#include<stdio.h>
int main()
{
    int a[100],i,rem,count=0,j,q,count1=0;
    long long int n,p,r;
    //count1=total digit,p=n to calculate the total digit,
    scanf("%lld",&n);
    p=n;
    r=10;
    while(p!=0)
    {
        p=p/r;
        count1++;
    }
    q=count1;
    count1=count1-1;
    while(n!=0)
    {
      rem=n%10;
      a[count1]=rem;
        n=n/10;
        count1--;
    }
    for(j=0;j<q;j++)
    {
        if(a[j]==4 || a[j]==7)
            count++;
    }
    printf("%d\n",count);
    if(count==4 || count ==7)
        printf("yes");
    else
        printf("no");
    return 0;
}
