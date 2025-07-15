#include<stdio.h>
int main()
{
     char n[100];
    int i,count4=0,count7=0;
    scanf("%s",n);
    for(i=0;n[i]!='\0';i++)//scaning till the null value of n and i have to do n[i] as i declare the the srting n;
    {
        if(n[i]==52)
            count4++;
        else if(n[i]==55)
            count7++;
    }
    if (count4>0 && count7>0)
        printf("yes");
    else
        printf("no");

    return 0;
}
