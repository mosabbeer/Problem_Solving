#include<stdio.h>
int main()
{
    int n,mis,chr,i,countm=0,countc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&mis,&chr);

        if(mis>chr)
            countm++;
        else if(chr>mis)
            countc++;
    }
    if(countm>countc)
        printf("Mishka");
    else if(countm<countc)
        printf("Chris");
    else
        printf("Friendship is magic!^^");
    return 0;
}
