#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,count1=0,cO=0,i,j,p,sum=0;
        scanf("%d",&n);
        char str[5000],str1[5000];
        scanf("%s",str);
        for(i=0;i<n;i++)
        {
            p=str[i]-48;
            if(p%2!=0)
                cO++;
            else if(p==0)
                count1++;
                sum=sum+p;
        }
        if(count1==n-1 ||cO==0 ||(n==2 && (str[n-2]-48)%2!=0))
            printf("-1");
        else
        {
            if(sum%2==0 && (str[n-1]-48)%2!=0)
                printf("%s",str);
            else
            {
            for(i=n-1;i>=0;i--)
            {
                p=str[i]-48;
                if(p%2==0)
                    str[i]='*';
                else
                    break;
            }
            if(cO%2!=0)
            {
                for(j=i-1;j>=0;j--)
                {
                    if((str[j]-48)%2!=0)
                    {
                        str[j]='*';
                        break;
                    }
                }
            }
            for(i=0;i<n;i++)
            {
                if(str[i]!='*')
                    printf("%c",str[i]);
            }
            }
        }
            printf("\n");
    }
}
