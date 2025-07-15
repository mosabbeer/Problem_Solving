#include<stdio.h>
#include<string.h>
int main()
{
    char str[200],str1[200],str2[400];
    scanf("%s",str);
    int i,j=0,w;
    strlwr(str);
   for(i=0;str[i]!='\0';i++)
   {
       if(str[i]=='a'|| str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='y')
         str[i]='*';
   }
   for(i=0;str[i]!='\0';i++)
   {
       if(str[i]!='*')
       {
           str1[j]=str[i];
           j++;
       }
   }
   str1[j]='\0';
   w=strlen(str1);
   j=0;
  for(i=0;i<2*w;i++)
  {
      if(i%2==0)
        str2[i]='.';
      else
      {
        str2[i]=str1[i/2];

      }
  }
  str2[2*w]='\0';
  printf("%s",str2);
  return 0;
}
