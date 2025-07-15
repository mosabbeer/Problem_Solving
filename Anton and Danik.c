#include<stdio.h>
int main()
{
    int i,n,countA=0,countD=0;
    char ch[1000000];
    scanf("%d",&n);
        scanf("%s",ch);

    for(i=0;i<n;i++)
    {
        if (ch[i]=='A')
            countA++;
        else if(ch[i]=='D')
            countD++;
    }
    if(countA>countD)
        printf("Anton");
    else if(countD>countA)
    printf("Danik");
    else
        printf("Friendship");
    return 0;

}
