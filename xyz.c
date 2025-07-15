#include<stdio.h>
int main()
{
    int x,y,count=0,i,j,k;
    scanf("%d %d",&x,&y);
    for(i=0;i<=x;i++)
    {
        for(j=0;j<=x;j++)
        {
            for(k=0;k<=x;k++)
            {
                if((i+j+k)<=x&& i*j*k<=y)
                    count++;
            }
        }
    }
    printf("%d",count);
}
