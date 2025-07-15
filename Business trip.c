
#include<stdio.h>
int main()
{
    int k,a[500],i,j,temp,sum=0;
    scanf("%d",&k);
    for(i=1; i<=12; i++)
        scanf("%d",&a[i]);
    for(i=1; i<12; i++)
    {
        for(j=i+1; j<=12; j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=1; i<=12; i++)
    {
        sum=sum+a[i];
            if(sum>=k)
            break;
    }
    if(sum<k)
        printf("-1");
    if(k==0)
    i=0;
    else{
    printf("%d",i);
    }
return 0;
}
