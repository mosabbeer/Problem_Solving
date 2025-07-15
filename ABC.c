#include<stdio.h>
int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    char str[1000];
    scanf("%s",str);
    for(i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])
            count++;
    }
    printf("%d\n",count);
}
