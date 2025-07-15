#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j,p=1;
        scanf("%d",&n);
        char str[1000];
        scanf("%s",str);
        for(j=1;j<n-1;j=j+3)
        {
            if(str[j]!=str[j+1])
                {
                   p=0;
                   break;
                }
        }
        if(p==1 && n!=2)
            printf("YES\n");
        else if(p==0)
            printf("NO\n");
    }
    return 0;
}
