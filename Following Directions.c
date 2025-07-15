#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,p=0,q=0,j,d;
        char str[1005];
        scanf("%d",&n);
        scanf("%s",str);
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]=='U')
                p++;
            else if(str[j]=='D')
                p--;
            else if(str[j]=='R')
                q++;
            else if(str[j]=='L')
                q--;
          if(p==1 && q==1)
              break;
        }
        if(p==1 && q==1)
        printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
