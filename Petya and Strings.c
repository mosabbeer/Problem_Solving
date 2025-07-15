#include<stdio.h>
int main()
{
    char a[100],b[100],i,j,count=0;
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]<97)
        a[i]=a[i]+32;
    }

    for(j=0;b[j]!='\0';j++)
    {
      if(b[j]<97)
            b[j]=b[j]+32;
    }
    i=0;
    while((a[i]==b[i]) && i!=j)
    {
        count++;
        i++;

    }
    if(a[count]==b[count]|| count==j)
        printf("0");
    else if(a[count]<b[count])
        printf("-1");
    else if(a[count]>b[count])
        printf("1");
    return 0;

}
