#include<stdio.h>
#include<string.h>
int main()
{
    int n,p,i,j,count=0;
    char str[10000],str1[10000];
    scanf("%s %s",str,str1);
    n=strlen(str);
    p=strlen(str1);
    i=n-1;
    j=p-1;
    while(str[i]==str1[j])
    {
        count++;
        i--;
        j--;
        if(i<0 ||j<0)
            break;
    }
    n=n-count;
    p=p-count;
    p=n+p;
    printf("%d",p);

}
