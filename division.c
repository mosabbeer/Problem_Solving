#include<stdio.h>
int main()
{
    int n,p;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&p);
        if(p>=1900)
            printf("Division 1\n");
        else if(p>=1600 && p<=1899)
            printf("Division 2\n");
        else if(p>=1400 && p<=1599)
            printf("Division 3\n");
        else if(p<=1399)
            printf("Division 4\n");
    }


    return 0;
}
