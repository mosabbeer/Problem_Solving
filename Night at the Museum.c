#include<stdio.h>
int main()
{
    int i=0,j,k,count=0,sum=0,arr[100],a;
    char str[100];
    scanf("%s",str);
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
     printf("%d\n",count);
        i=0;
    while(str[i]!='\0')
    {
        arr[i]=str[i]-97;
        i++;
    }
    for(int j=0;j<count-1;j++)
       {
           a=arr[j]-arr[j+1];
           if(a<0)
            a=-1*a;

           sum=sum+a;
       }
        for(int j=0;j<count;j++)
        printf("%d\t",arr[j]);
        printf("\n%d\n",sum);

    return 0;
}
