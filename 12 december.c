#include<stdio.h>
int main()
{
    int a[10];
    for (int i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<10;i=i+2)
        printf("sum of 2 is %d",a[i]+a[i+1]);

     return 0;
}
