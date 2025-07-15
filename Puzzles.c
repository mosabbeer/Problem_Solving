#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    int a[m],j,temp,min=1000000,p;
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=0;i+n-1<m;i++)
    {
        p=a[n+i-1]-a[i];
        if(min>p)
            min=p;
    }
    printf("%d",min);

}
