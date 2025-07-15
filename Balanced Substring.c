#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j,k,counta,countb,first,second;
        char str[100000];
        scanf("%d",&n);
        scanf("%s",str);
        for(j=0;j<n;j++)
        {
            if(str[j]=='a')
                counta++;
            else
                countb++;
        }
        if(counta==n || countb==n)
            printf("-1 -1\n");
        else
        {
        for(j=0;j<n-1;j++)
        {
            if(str[j]!=str[j+1])
                break;
        }
        printf("%d %d\n",j+1,j+2);
        }
    }
}
