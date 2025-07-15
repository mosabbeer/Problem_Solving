#include<stdio.h>
int main()
{
    int n,p,i=0,j,a[5],count=0,c1=0;
    scanf("%d",&n);
    p=n;
    while(p>0)
    {
        a[i]=p%10;
        p=p/10;
        i++;
    }
    for(j=0;j<i;j++)
    {
        if(a[j]==4 || a[j]==7)
            count++;
    }
    if(count==i)
        printf("YES");
    else
    {
        if(n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0)
            c1++;
        if(c1==0)
        {
            if(n%444 ==0 || n%474==0 || n%447==0 || n%477==0)
                c1++;
        }
        if(c1==0)
            printf("NO");
        else
            printf("YES");
    }
}
