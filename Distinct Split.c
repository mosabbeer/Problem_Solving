#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        char str[100];
        scanf("%s",str);
        for(i=n-1;i>0;i--)
        {
            if(str[i]==str[i-1])
                break;
        }
        printf("%d\n",i);
    }
}
