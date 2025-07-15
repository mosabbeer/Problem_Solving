#include<stdio.h>
int main()
{
    int n,m,i,j,k,c=0,max=0,sum=0;
    scanf("%d %d",&m,&n);
    char str[1509][1509];
        for(j=0;j<m;j++)
            scanf("%s",str[j]);
    int a[10000];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        max=0;
        for(j='A';j<='E';j++)
        {
            c=0;
            for(k=0;k<m;k++)
                {
                    if(str[k][i]==j)
                        c++;
                }
                    if(c>max)
                        max=c;
        }
        sum=sum+a[i]*max;
    }
    printf("%d",sum);
}
