#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[100000];
        scanf("%s",str);
        int i;
        if(str[0]=='a')
            str[0]='b';
        else
            str[0]='a';
        for(i=1;str[i]!='\0';i++)
        {
            if(i%2==0)
            {
                if(str[i]=='a')
                    str[i]='b';
                else
                    str[i]='a';
            }
            else
            {
                if(str[i]=='z')
                    str[i]='y';
                else
                    str[i]='z';
            }
        }
        printf("%s\n",str);
    }
}
