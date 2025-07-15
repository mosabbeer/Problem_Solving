#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],str1[1000],str2[1000];
    int m,j=0,n,count=0,i;
    scanf("%[^\n]s",str);
    m=strlen(str);
    for(i=0;i<m;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str1[j]=str[i];
            j++;
        }
    }
    n=strlen(str1);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str1[i]==str1[j])
                str1[j]='5';
        }
    }
    for(i=0;i<n;i++)
    {
        if(str1[i]!='5')
            count++;
    }
    printf("%d",count);

}
