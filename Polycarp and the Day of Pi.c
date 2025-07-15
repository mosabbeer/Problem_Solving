#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int j,count=0,m;
        char str1[31],str2[35];
        scanf("%s",str1);
        str2[35]="314159265358979323846264338327";
        m=strlen(str1);
        for(j=0;j<m;j++)
        {

            if(str1[j]!=str2[j])
                    break;
        }
        printf("%d\n\n\n",j);

    }
}
