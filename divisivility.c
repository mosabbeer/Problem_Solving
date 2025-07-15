#include<stdio.h>
int main()
{
    int i,n,x,y,p,q;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        if(x>=y)
        {
            if(x%y==0)
                p=0;
                else
            {
            q=x%y;
            p=y-q;
            }
        }
        else if(x<y)
            {
            p=y-x;
            }
      printf("%d\n",p);

    }

    return 0;
}
