#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
     int n,j,count=0;
     scanf("%d",&n);
     char str[200],str1[200];
     scanf("%s %s",str,str1);
     for(j=0;j<n;j++)
     {
         if(str[j]==str1[j])
            count++;
         else if((str[j]=='G'&& str1[j]=='B')|| (str[j]=='B'&& str1[j]=='G'))
            count++;
     }
     if(count==n)
        printf("YES\n");
     else
        printf("NO\n");

    }

}
