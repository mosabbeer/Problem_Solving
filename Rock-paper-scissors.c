#include<stdio.h>
int main()
{
    char str1,str2,str3,str4="rock",str5="paper",str6="scissors";
    int F,M,S;
    scanf("%s",str1);
    if(strcmp(str1,str4))
        F=1;
    else if(strcmp(str1,str5))
        F=2;
    else if(strcmp(str1,str6))
    F=3;
    scanf("%s",str2);
    if(strcmp(str2,str4))
        M=1;
    else if(strcmp(str2,str5))
        M=2;
    else if(strcmp(str2,str6))
       M=3;
       scanf("%s",str3);
    if(strcmp(str3,str4))
        S=1;
    else if(strcmp(str3,str5))
        S=2;
    else if(strcmp(str3,str6))
      S=3;
    printf("%d %d %d",F,M,S);
}
