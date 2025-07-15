#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,p=0,count=0;
        scanf("%d",&n);
        char str[5000];
        scanf("%s",str);
        for(i=0;i<n;i++)
        {

            if(str[i]=='a' || str[i]=='e'||str[i]=='i' || str[i]=='o'||str[i]=='u')
            {
                count++;
            }
        }
            if(count>0)
            {

               for(i=0;i<n;i++)
               {
                 if(str[i]=='a' || str[i]=='e'||str[i]=='i' || str[i]=='o'||str[i]=='u')
                  {
                    str[i]='1';
                  }
                  else
                    str[i]='0';
              }
            }
        for(i=0;i<n-1;i++)
        {
            if(str[i]==str[i+1])
            {
                p=1;
                break;
            }
        }
        if(p==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
