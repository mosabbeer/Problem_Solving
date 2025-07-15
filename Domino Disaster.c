#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j;
        scanf("%d",&n);
        char str[1000];
        scanf("%s",str);
        for(j=0;j<n;j++)
        {
            if(str[j]=='U')
                str[j]='D';
            else if(str[j]=='D')
                str[j]='U';
        }
        printf("%s\n",str);
    }
    return 0;
}
































































































