#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,count=0,i;
        char str[1000];
        scanf("%s",str);
        n=strlen(str);
        str[n]='p';
        str[n+1]='p';
        str[n+2]='\0';
        for(i=0;i<n;i++)
        {
            if((str[i]!='Y' && str[i]!='e' && str[i]!='s')|| (((str[i]==str[i+1])&& str[i]=='s') ||(str[i]=='s'&& str[i+1]=='e')))
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            i=0;
            while(i<n)
            {
                if(str[i]=='Y'&&str[i+1]=='e'&&str[i+2]=='s')
                {
                    str[i]=str[i+1]=str[i+2]='.';
                    i=i+3;
                }
                else if(str[i]=='e'&&str[i+1]=='s'&&str[i+2]=='Y')
                {
                    str[i]=str[i+1]=str[i+2]='.';
                    i=i+3;
                }
                else if(str[i]=='e')
                {
                    str[i]='.';
                    i++;
                }
                else if(str[i]=='s' && str[i+1]=='.')
                {
                    str[i]='.';
                    i=i+2;
                }
            }
            for(i=0;i<n;i++)
            {
                if(str[i]>65)
                {
                    count++;
                    break;
                }
            }
        }
        if(count==0)
            printf("YES\n");
        else
            printf("NO\n");

    }
}
