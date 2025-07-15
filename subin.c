#include <stdio.h>
int main(){
    int a[3],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d ",&a[0],&a[1],&a[2]);
        if(a[0]>a[1]&& a[0]<a[2])
        printf("%d",a[0]);
        else if(a[1]>a[0]&& a[1]<a[2])
        printf("%d",a[1]);
        else
        printf("%d",a[2]);
    }
    return 0;
}
