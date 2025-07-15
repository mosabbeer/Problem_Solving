#include<stdio.h>
int main()
{
    int n,a,arr[30],j,k;
    char ch[30];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int c1=0,p,c2;
        scanf("%d",&a);
          scanf("%s",ch);
          for(j=0;j<n;j++)
          {
              if(ch[j]=='1')
                c1++;
          }
          c2=ch[0]-48;
          p=c1/2;
         while(c2==p)
         {
             if(ch[j]=='1')
                c2++;
             break;
         }
       for(k=0;k<j;k++)
        printf("+");
       for(k=j;ch[k]!='\0';k++)
        printf("-");
       printf("\n");
    }
    return 0;
}
