#include<stdio.h>
int main()
{
    int i;
    char a[100];
    scanf("%s",a);
    if(a[0]>=97 && a[0]<=123)
        a[0]=a[0]-32;
    printf("%s",a);
    return 0;
}
