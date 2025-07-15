#include<stdio.h>
int main()
{
    int n,a[130]={0},max=-99,i,j;
     char str[1000];
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
     scanf("%s",str);
     for(i=0;str[i]!='\0';i++)
     {
        a[str[i]]++;
     }
    }
       for(i=65;i<=125;i++)
      {
        if(a[i]>max)
            max=a[i];
      }
    for(i=65;i<=125;i++)
    {
      if(max==a[i])
        printf("%c",i);
    }
}
