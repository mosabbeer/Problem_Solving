#include<stdio.h>
int main()
{
    char ch[100];
    int countA =0,counta=0;
    scanf("%s",ch);
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>=65 && ch[i]<=90)
      countA++;

        if(ch[i]>=97 && ch[i]<=123)
            counta++;
    }

    for(int i=0;i<=counta+countA-1;i++)
    {
        if(countA>counta && ch[i]>=97)
        ch[i]=ch[i]-32;
        else if(countA<=counta && ch[i]<=90)

        ch[i]=ch[i]+32;
    }
    printf("%s",ch);
    return 0;
}
