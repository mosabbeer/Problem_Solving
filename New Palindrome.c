#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,p=0,i;
        char str[60];
        scanf("%s",str);
        n=strlen(str);
        for(i=1;i<n/2;i++)
        {
            if(str[i]!=str[0])
                p=1;
        }
        if (p==1)
            printf("%d\n",n-1);
        else
        {
            if(n%2==0)
            printf("1\n");
            else
            {
                if(str[0]!=str[n/2])
                printf("%d\n",n/2+1);
                else
                    printf("-1\n");

            }

        }
    }
}
