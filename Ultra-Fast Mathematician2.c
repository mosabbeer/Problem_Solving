#include<stdio.h>
int main()
{
    char a[1000],b[1000],c[1000];
    int i;
    scanf("%s %s",a,b);
    for( i=0;a[i]!='\0';i++)
    {
        if(a[i]=='1' &&b[i]=='1')
            c[i]='0';
        else if(a[i]=='0'&& b[i]=='0')
            c[i]='0';
        else
            c[i]='1';

    }
    c[i]='\0';
    printf("%s",c);
    return 0;
}
