#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],d[100],p;
    scanf("%s %s",a[100],c[100]);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)
        b[i]=a[i]+32;
    }
    for(int i;c[i]!='\0';i++)
    {
        if(c[i]>=65 && c[i]<=90)
        d[i]=c[i]+32;
    }
    for(int i=0;d[i]!='\0';i++)
        {
            p=(c[i]-d[i]);
        }

    if(p>0)
    printf("1");
    else if(p<0)
        printf("-1");
    else
        printf("0");
        return 0;
}
