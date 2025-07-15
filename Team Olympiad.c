#include<stdio.h>
int main()
{
    int n,a[10000],b[3]={0},i,j,min=999999,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
            b[0]++;
        else if(a[i]==2)
            b[1]++;
        else
            b[2]++;
    }
    for(i=0;i<3;i++)
    {
        if(min>b[i])
            min=b[i];
    }
    printf("%d\n",min);
    for(i=0;i<min;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]==1)
        {
            printf("%d ",j+1);
            a[j]=0;
        }
        else if(a[j]==2)
        {
            printf("%d ",j+1);
            a[j]=0;
        }
        else if(a[j]==3)
        {
            printf("%d ",j+1);
            a[j]=0;
        }
        }
             printf("\n");
    }
}
