#include<stdio.h>
int main()
{
    int h,m,s,p;
    scanf("%d %d %d",&h,&m,&s);
    char str[4];
    scanf("%s",str);
    if(str[0]=='P')
        h=h+12;
    p=h*60+m;
    p=p*60+s;
    printf("%d",p);
}
