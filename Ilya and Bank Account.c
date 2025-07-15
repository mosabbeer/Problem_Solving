#include<stdio.h>
int main()
{
    char str[1000],i;
    int m,p,q;
    scanf("%s",str);
    m=strlen(str);
    if(str[0]=='-')
    {
        p=str[m-1]-48;
        q=str[m-2]-48;
        if(p>q)
        {
            str[m-1]='\0';
        }
        else
        {
            str[m-2]=str[m-1];
            str[m-1]='\0';
        }
        if(str[0]=='-' && str[1]=='0')
        {
            str[0]='0';
            str[1]='\0';
        }
    }

    printf("%s",str);
   // printf("%d",m);
}
