#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,m;
    char str[1000],str1[1000];
    scanf("%s",str);
    j=strlen(str);
    for(i=0;i<j-2;i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            str[i]='*';
            str[i+1]='*';
            str[i+2]='*';
        }
    }
    m=strlen(str);
    if(str[m-1]=='*')
        m=m-3;
   // printf("%s",str);
    //printf("\n%d",m);
    for(i=0;i<m;i++)
    {
        if(str[i]== str[i+1] && str[i+1]== str[i+2] && str[i]=='*')
        {
            printf(" ");
            i=i+2;
        }
        else if(str[i]!='*')
        printf("%c",str[i]);
    }
}
