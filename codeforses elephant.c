#include<stdio.h>
int main()
{
    int x,y,z,n,j=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
    scanf("%d %d %d",&x,&y,&z);
    if(((x==1)||(y==1))&& ((y==1)||(z==1)))
    {
        j++;
        if((y==1)&& (x==0)&&(z==0))
            j--;
    }
    }
        printf("%d",j);


    return 0;
}
