#include<stdio.h>
int main()
{
    int n,p,q,i=3,j,k,a[4],l;
    scanf("%d",&n);

    for(j=0;j<100;j++)
    {

        int count=0,q=n+1;
    while(q!=0)
    {
        a[i]=q%10;
        q=q/10;
        i--;
    }

    for(k=0;k<3;k++)
    {
        for(l=k+1;l<4;l++)
            if(a[k]!=a[l])
            count++;
    }
    if(count==6)
        break;
   else
    n++;
    }
    printf("%d",count);
}
