#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int j,count1=0,n,count2,p=0,d,k;
        scanf("%d",&n);
        char str[1000];
        scanf("%s",str);
        for(j=1;j<n;j++)
        {
            if(str[j]=='0')
                str[j-1]='+';
            if(str[j]=='1')
            {
                count1++;
                if(count1%2==0)
                    str[j-1]='+';
                else
                    str[j-1]='-';
            }
        }
        str[n-1]='\0';
        printf("%s",str);
        printf("\n");

    }
}
