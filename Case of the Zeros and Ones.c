#include<stdio.h>
int main()
{
    int n,i,count=0,j=0,k;
    scanf("%d",&n);
    char str[1000],str1[1000];
    scanf("%s",str);

    for(k=0;k<n;k++)
    {
    for(i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])
        {
            str1[j]=str[i];
            j++;
        }
    }
    if(str[n-2]!=str[n-1])
    {
        str1[j]=str[n-1];
        j++;
    }
    str1[j]='\0';
    for(i=0;str1[i]!='\0';i++)
        str[i]=str1[i];
    str[i]='\0';
    }
    printf("%s",str);
    return 0;
}
