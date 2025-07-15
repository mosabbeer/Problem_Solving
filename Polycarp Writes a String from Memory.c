#include<stdio.h>
int main()
{
    int test,i;
    scanf("%d",test);
    for(i=0;i<test;i++)
    {
        char str[1000],j,k;
        int m,count=0;
        scanf("%s",str);
        m=strlen(str);
        for(j=0;j<m-1;j++)
        {
            for(k=j+1;k<m;k++)
            {
                if(str[j]==str[k])
                    str[k]='*';
            }
        }
        for(j=0;j<m;j++)
        {
            if(str[j]!='*')
                count++;
        }
        if(count%3==0)
        printf("%d\n",count/3);
        else
            printf("%d\n",count/3+1);
    }
}
