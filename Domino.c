#include<stdio.h>
int main()
{
    int a[100],b[1000],n,p=0,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
            count++;
        if(b[i]%2!=0)
            count++;
    }
    if(count%2!=0)
        printf("-1");
    else
    {
        for(i=0;i<n;i++)
        {
            if((a[i]%2!=0 && b[i]%2==0)||(a[i]%2==0 && b[i]%2!=0))
                p=1;
                else
                    printf("-1");
            if(p==1)
                break;
        }
        printf("%d",p);
    }

}
