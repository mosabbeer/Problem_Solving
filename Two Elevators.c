#include<stdio.h>
int main()
{
    int t,a,b,c,f1,f2;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
       scanf("%d %d %d",&a,&b,&c);
       f1=a-1;
       if(c>b)
            f2=2*(c-b)+b-1;
       else if(c<b)
        f2=b-1;
       if(f1<f2)
        printf("1\n");
       else if(f2<f1)
        printf("2\n");
       else if(f1==f2)
        printf("3\n");
    }
    return 0;
}
