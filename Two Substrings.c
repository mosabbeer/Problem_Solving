#include<stdio.h>
#include<string.h>
int main()
{
    int a,b1=0,i,p=0;
    char str[100000];
    scanf("%s",str);
   a =strlen(str);
   for(i=0;i<a-2;i++)
   {
     if((str[i]=='A'&& str[i+1]=='B'&& str[i+2]=='A')||(str[i]=='B'&&str[i+1]=='A'&&str[i+2]=='B'))
        {
            str[i]='1';
            str[i+1]='1';
            str[i+2]='1';
            p++;
            break;

        }
   }
   for(i=0;i<a-1;i++)
   {
       if(str[i]=='A'&& str[i+1]=='B')
       {
           p++;
           break;
       }

   }
   for(i=0;i<a-1;i++)
   {
       if(str[i]=='B'&& str[i+1]=='A')
       {
           p++;
           break;
       }
   }
   if(p>=2)
    printf("YES");
   else
    printf("NO");

}
