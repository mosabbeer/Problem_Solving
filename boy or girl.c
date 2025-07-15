#include<stdio.h>
int main()
{
    int i,j,count=0;
    char ch[100];
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        count++;
    }
    printf("%d\n",count);
       for(i=0;ch[i]!='\0';i++)
       {
        for (j=i+1;ch[j]!='\0';j++)
        {
           if(ch[i]!=5)
           {

            if(ch[i]==ch[j])
            {
                count--;
            ch[j]=5;
            }
       }
            else
                count;
        }

       }
       printf("%d\n",count);
    if(count%2==0)
    printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    return 0;
}
