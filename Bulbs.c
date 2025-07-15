#include<stdio.h>
int main()
{
    int n,m,p=0,i,j;
    scanf("%d %d",&n,&m);
    int a[100]={0};
    for(i=0;i<n;i++)
    {
        int x,y;
        scanf("%d",&x);
        for(j=0;j<x;j++)
        {
            scanf("%d",&y);
            a[y-1]=1;
        }
    }
    for(i=0;i<m;i++)
    {
        if(a[i]==0)
        {
            p=1;
            break;
        }
    }
    if(p==0)
        printf("YES");
    else
        printf("NO");
}
