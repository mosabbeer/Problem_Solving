#include<stdio.h>
int main()
{
    int a[3],i,temp,j;
    for(i=0;i<3;i++)
    scanf("%d",&a[i]);
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int sum=a[0]-a[1]-a[2];
    if(sum<0)
        printf("0");
    else
    printf("%d",sum+1);
}
