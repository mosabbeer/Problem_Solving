#include<stdio.h>
int main()
{
    int i,n;
    char a[7];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        if((a[0]=='Y'||a[0]=='y') && (a[1]=='e'|| a[1]=='E') &&(a[2]=='s'||a[2]=='S'))
            printf("YES\n");
         else
            printf("NO\n");
    }
    return 0;
}
