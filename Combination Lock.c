#include<stdio.h>
int main()
{
    int n,i,sum=0,p;
    scanf("%d",&n);
    char str1[10000],str2[10000];
    scanf("%s %s",str1,str2);
    for(i=0;i<n;i++)
    {
        p=str1[i]-str2[i];
        if(p<0)
            p=-1*p;
        if(p>5)
            p=p-3;
        sum=sum+p;
    }
    printf("%d",sum);
}
