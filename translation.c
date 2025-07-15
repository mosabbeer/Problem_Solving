#include<stdio.h>
int main()
{
char trans[1000],snart[1000];
int i=0,j=0,count=0,count1=0;
scanf("%s %s",trans,snart);
for(i=0;trans[i]!='\0';i++)
{
    count++;
}
 i=0;
 for(k=0;snart[k]!='\0';k++);
 for(j=count-1;j>=0;j--)
    {
    if(trans[i]==snart[j])

    count1++;
    i++;
    }
    if(count==count1)
        printf("YES");
   else if(k!=count)
    printf("NO");
    else
        printf("NO");

        return 0;
}

