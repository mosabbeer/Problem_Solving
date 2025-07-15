#include<stdio.h>
int main()
{
    int i,j,t,n;
      char str[100];
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
     int count=0,counti=0,countm=0,countu=0,countr=0;
    scanf(" %d %s",&n,str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='T')
            count++;
    }
    if(count==1 && n>=5)
    {
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]=='i')
                counti++;
            else if(str[i]=='u')
            countu++;
            else if (str[i]=='m')
                countm++;
            else if(str[i]=='r')
                countr++;

        }
    }
    if(counti==1 && countm==1 && countu==1 && countr ==1)
        printf("YES\n");
    else
        printf("NO\n");
    }
    return 0;
}
