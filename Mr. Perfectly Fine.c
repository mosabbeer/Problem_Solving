#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,p,min1=4342490,min0=348523946,min11=349834234;
        char str[3];
        scanf("%d",&n);
        for(i=1;i<=4;i++)
        {
            scanf("%d %s",&p,str);
            if(str[0]=='1'&&str[1]=='0')
            {
                if(p<min1)
                    min1=p;
            }
            else if(str[0]=='0'&&str[1]=='1')
               {
                  if(p<min0)
                     min0=p;
               }
               else if(str[0]=='1'&&str[1]=='1')
               {
                  if(p<min11)
                     min11=p;
               }
        }
        p=min1+min0;
        if(p>min11)
            printf("%d\n",min11);
        else
           {
                if(p>=2000000)
                printf("-1\n");
          printf("%d\n",p);
           }
    }
}
