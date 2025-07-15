#include<stdio.h>
#include<string.h>
int main()
{
    char str[105];
    scanf("%s",str);
    strlwr(str);
        str[0]=str[0]-32;
        printf("%s",str);
}
