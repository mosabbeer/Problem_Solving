#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,p=0;
    char str[1000];
    scanf("%s",str);
    n=strlen(str);
    if(str[0]=='4')
        p=1;
    else
    {

    for(i=0;i<n;i++)
    {
      if(str[i]=='4' && str[i+1]=='4' && str[i-2]=='1')
        {
            str[i]='*';
            str[i+1]='*';
            str[i-2]='*';
        }
    else if(str[i]=='4'&& str[i-1]=='1')
        {
            str[i]='*';
            str[i-1]='*';
        }

    }
    for(i=0;i<n;i++)
    {
        if(str[i]!='*' && str[i]!='1')
        {
            p=1;
            break;
        }
    }
    }
    printf("%s",str);
    if(p==0)
        printf("YES\n");
    else
        printf("NO\n");
}
