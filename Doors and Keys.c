#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        char str[7];
        scanf("%s",str);
        int p=0,j=0,u=0,v=0,w=0;
        while(str[j]!='R')
        {
            p++;
            j++;
        }
        for(j=0;j<p;j++)
        {
            if(str[j]=='r')
                u++;
        }
        j=p=0;
        while(str[j]!='G')
        {
            p++;
            j++;
        }
        for(j=0;j<p;j++)
        {
            if(str[j]=='g')
                v++;
        }
        j=p=0;
        while (str[j]!='B')
        {
            p++;
            j++;
        }
        for(j=0;j<p;j++)
        {
            if(str[j]=='b')
                w++;
        }
        if(u==1 && v==1 && w==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
