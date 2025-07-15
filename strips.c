#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[10][10];
        int i,j,p=0,q=0,C=0,R=0;
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
                scanf("%s",str[i][j]);
        }
        printf("\n");
        for(i=7;i>=0;i--)
        {
            for(j=7;j>=0;j--)
            {
                if(str[i][j]>65)
                {
                    p=i;
                    q=j;
                    break;
                }
            }
        }
        for(i=7;i>=0;i--)
        {
            if(str[p][i]==str[p][q])
                C++;
        }
        for(i=7;i>=0;i--)
        {
            if(str[p][q]==str[i][q])
                R++;
        }
        if(C==6)
        {
            if(str[p][q]=='R')
                printf("B\n");
            else
                printf("R\n");
        }
       else if(R==6)
        {
            if(str[p][q]=='R')
                printf("B\n");
            else
                printf("R\n");
        }
        else
            printf("%c\n",str[p][q]);
    }
}
