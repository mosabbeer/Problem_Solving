 #include<stdio.h>
 int main()
 {
    char ch[100];
    int n,count,i,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
     scanf("%s",ch);
     count=0;
     for(i=0;ch[i]!=0;i++)
        count++;

    if(count>10)
     printf("%c%d%c\n",ch[0],count-2,ch[count-1]);
     else
        printf("%s\n",ch);
    }
     return 0;
 }

