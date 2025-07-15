#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        char str[1000],str1[1000];
        int j,k=0,n;
        scanf("%s",str);
        for(n=0;n<100;n++)
        {
            k=0;
       for(j=0;str[j]!='\0';j++)
       {
           if(str[j]!='1' && str[j+1]!='0')
           {
               str[k]=str[j];
               k++;
           }
           str[k]='\0';
       }
        }
        printf("%s\n",str);

    }
}
