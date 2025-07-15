#include<stdio.h>
int main()
{
    int n, p=0,a,b,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d %d",&a,&b);
    i=0;
       p=p+b-a;
       for(i=1;i<n-1;i++)
       {
           if(p<p+(b-a))
            p=p+(b-a);
       }
       printf("%d",p);
       return 0;
}
