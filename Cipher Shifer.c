#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num1,i,j,num;
        scanf("%d",&num1);
        char str[1000];
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++)
        {
            for(j=i+1;j<num1;j++)
            {
                if(str[i]==str[j])
                {
                    num=j;
                    j=num1+1;
                }
            }
            printf("%c",str[i]);
            i=num;
        }
        printf("\n");
    }
}
