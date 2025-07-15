#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    while(s--)
    {
        int b,c,i=0,max,min,p,l=0,max1=-99,n;
        scanf("%d %d",&b,&c);
        for(i=b;i<=c;i++)
        {
            p=i;
            max=-9;
            min=11;
            while(p>0)
            {
                c=p%10;
                if(c>max)
                    max=c;
                if(c<min)
                    min=c;
            }
            n=max-min;
            if(n>max1)
            {
                max1=p;
                l=i;
            }
            if(max1==9)
                i=c+1;
        }
        printf("%d\n",l);
    }
}
