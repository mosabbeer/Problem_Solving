#include<stdio.h>
int main()
{
    int test,i;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        char ch[2], str[1000];
        int j,count=0,c=1;
        scanf("%s",str);
        scanf("%s",ch);
        for(j=0;str[j]!='\0';j++)
        {
            if(ch[0]==str[j])
                count++;
        }

      if(count==0)
       c=1;
      else
      {
          for(j=0;str[j]!='\0';j++)
          {
              if(str[j]==ch[0])
              c=j;
             if(c%2==0)
                break;
          }
      }
          if(c%2==0)
            printf("YES\n");
          else
            printf("NO\n");
    }
}
