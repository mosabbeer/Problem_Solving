#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
    int n,m,i,j,count=0,count1=0,count2=0;
    scanf("%d %d",&n,&m);
    char str1[1000],str2[1000];
    scanf("%s %s",str1,str2);
    for(i=0;i<n-1;i++)
    {
        if(str1[i]!=str1[i+1])
            count++;
    }
    for(i=0;i<m-1;i++)
    {
        if(str2[i]!=str2[i+1])
            count1++;
    }
    if(count==n-1 && count1==m-1)
        printf("YES\n");
    else
    {
        for(i=0;i<n-1;i++)
        {
            if(str1[i]==str1[i+1])
                count2++;
        }
        for(i=0;i<m-1;i++)
        {
            if(str2[i]==str2[i+1])
            count2++;
        }
        if(count2<2 && str1[n-1]!=str2[m-1])
            printf("YES\n");
            else
            printf("NO\n");

    }
    }
    return 0;
}
