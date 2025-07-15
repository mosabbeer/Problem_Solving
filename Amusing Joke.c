#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],str1[700],str2[90],temp;
    scanf("%s %s %s",&str1,&str2,&str);
    int i,n,m,j;
    strcat(str1,str2);
    n=strlen(str1);
    m=strlen(str);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;i<n;i++)
        {
            if(str1[i]<str1[j])
            {
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }

        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str[i]<str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
  m=strcmp(str1,str2);
    if(m==1)
        printf("YES");
    else
        printf("NO");
        printf("%d",m);
}
