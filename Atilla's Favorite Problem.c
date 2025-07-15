#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int j,n,a[150],max=0;
        char str[150];
        scanf("%d",&n);
        scanf("%s",str);
        for(j=0;j<n;j++)
        {
            a[j]=str[j]-96;
        }
        for(j=0;j<n;j++)
        {
            if(max<a[j])
                max=a[j];
        }
        printf("%d\n",max);
    }
}
