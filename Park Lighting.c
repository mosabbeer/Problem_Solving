#include<stdio.h>
    int main()
    {
        int t,i;
        scanf("%d",&t);
        for(i=0;i<t;i++)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            if(a*b%2==0)
                printf("%d\n",a*b/2);
            else
                printf("%d\n",(a*b/2)+1);
        }
        return 0;
    }
