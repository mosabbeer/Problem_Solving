#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,H,M,h,m,j,min,hour,count=0,minimum=1460,p,fH,fM;
        scanf("%d %d %d",&n,&H,&M);
        for(j=0;j<n;j++)
        {
            scanf("%d %d",&h,&m);

        min=m-M;
        if(min<0)
        {
            min=min+60;
            h--;
        }
        hour=h-H;
        if(hour<0)
            hour=hour+24;
            p=hour*60+min;
            if(p<minimum)
            {
                fH=hour;
                fM=min;
                minimum=p;
            }
        }
        printf("%d %d\n",fH,fM);

    }
}
