#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    int n1=0,n2=0,j,p;
    char str[1000];
    scanf("%s",str);
    for(j=0;str[j]!='\0';j++)
    {
        if(str[j]=='1')
            n1++;
        else
            n2++;
    }
    if(n1>=n2)
        p=n2;
    else
        p=n1;
    {
        if(p%2!=0)
            printf("DA\n");
        else
            printf("NET\n");
    }
    }
    return 0;
}
