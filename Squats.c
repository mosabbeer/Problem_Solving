#include<stdio.h>
int main()
{
    int n,i,cX=0,p=0;
    scanf("%d",&n);
    char str[300];
    scanf("%s",str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='X')
            cX++;
    }
    if(cX==n/2)
    {
       p=0;
    }
    else if(cX>n/2)
    {
        for(i=0;i<n;i++)
        {
            if(str[i]=='X')
            {
                str[i]='x';
                p++;
                cX--;
            }
            if(cX==n/2)
                break;
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(str[i]=='x')
            {
                str[i]='X';
                p++;
                cX++;
            }
            if(cX==n/2)
                break;
        }
    }
      printf("%d\n",p);
    printf("%s",str);
}
