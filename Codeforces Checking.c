#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        char ch[2];
        scanf("%s",ch);
        if(ch[0]=='c' ||ch[0]=='o'|| ch[0]=='d' || ch[0]=='e' || ch[0]=='f' || ch[0]=='r' || ch[0]=='s' )
        {
            printf("YES\n");
        }
        else
        {
             printf("NO\n");
        }

    }
    return 0;
}
