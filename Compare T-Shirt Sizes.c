#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num1,num2,c1=0,c2=0,i;
        char str1[1000],str2[1000];
        scanf("%s %s",str1,str2);
        num1=strlen(str1);
        num2=strlen(str2);
        if(str1[num1-1]==str2[num2-1])
        {
            for(i=0;i<num1;i++)
            {
                if(str1[i]=='X')
                    c1++;
            }
            for(i=0;i<num2;i++)
            {
                if(str2[i]=='X')
                    c2++;
            }
            if(c1>c2)
            {
                if(str1[num1-1]=='L')
                     printf(">");
                else if(str1[num1-1]=='S')
                     printf("<");
                     else
                        printf(">");

            }

            else if(c1<c2)
              {
                if(str1[num1-1]=='L')
                     printf("<");
                else if(str1[num1-1]=='S')
                     printf(">");
                     else
                        printf("<");

            }

                else
                    printf("=");
        }
        else
        {
            if(str1[num1-1]>str2[num2-1])
                printf("<");
            else if(str1[num1-1]<str2[num2-1])
                printf(">");
            else
            printf("=");
        }
        printf("\n");
    }
}
