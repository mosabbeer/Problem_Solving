#include<stdio.h>
int main()
{
char a[50];
int count=0,i;
fgets(a,50,stdin);
printf( "%s",a);
for(i=0;a[i]!='\0';i++)
   count++;
   printf("%d",count-1);
    return 0;
}
