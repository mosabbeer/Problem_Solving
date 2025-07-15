#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       long long int a,b,c,d,p,q,m,n;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        m=pow(10,b);
        n=pow(10,d);
        p=a*m;
        q=c*n;
        if(p>q)
            printf(">\n");
        else if(p<q)
            printf("<\n");
        else if(p==q)
            printf("=\n");
    }
    return 0;
}
