#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        char str[100];
        scanf("%s",str);
        m=strlen(str);
        if(m<=2)
            printf("%s",str);
        else
        {
            for(j=0;j<m;j=j+2)
            {
                printf("%c",str[j]);
            }
            if(m%2==0)
                printf("%c",str[m-1]);
        }
        printf("\n");
    }
    return 0;
}
-
