#include<stdio.h>
int main()
{
    int a[100],n,p=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]==1)
        p++;
    }
    if(p>0)
        printf("Hard");
    else
        printf("Easy");
    return 0;
}
