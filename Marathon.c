#include<stdio.h>
int main()
{
    int t,a,b,c,d,count;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        count=0;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a<b)
            count++;
        if(a<c)
            count++;
        if(a<d)
            count++;
        printf("%d\n",count);

    }
    return 0;
}
