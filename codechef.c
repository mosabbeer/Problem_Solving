/*#include<stdio.h>
int main()
{
    int x=5,y=5;
    if(x==y)
        printf("yes");
    else
        printf("no");
}*/

#include<stdio.h>
int main()
{
    int x,y,z,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(x==y || y==z)
        printf("yes\n");
       else
       printf("no\n");
    }
    return 0;
}




