#include<stdio.h>
int main()
{
    char str;
    int p,q,i,j,count=0;
    scanf("%d %d",&p,&q);
    for(i=0;i<p*q;i++)
    {
            scanf("%S",&str);
            if(str=='Y' || str=='M' || str=='C')
                count++;
    }
    if(count>0)
        printf("#Color");
    else
        printf("#Black&White");
    return 0;
}
