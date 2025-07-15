#include<stdio.h>
int main()
{
    int t,a,b,diff,move;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            diff=a-b;
            if(diff%2==0)
                move=1;
            else
                move =2;
        }
        else if(b>a)
        {
            diff=b-a;
            if(diff%2==0)
                move=2;
            else
                move=1;
        }
        else
            move=0;
        printf("%d\n",move);
    }
    return 0;
}
