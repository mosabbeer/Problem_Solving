#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j,k=0,count=0,p=0;
        scanf("%d",&n);
        char str[1000],str1[1000],str3[5]="meow";
        scanf("%s",str);
        strlwr(str);
       for(j=0;j<n;j++)
       {
           if(str[j]=='m'|| str[j]=='e' || str[j]=='o' || str[j]=='w')
           p++;
       }
       if(p!=n)
        printf("NO\n");
       else
       {
        for(j=0;j<n-1;j++)
        {
            if(str[j]!=str[j+1])
            {
                str1[k]=str[j];
                k++;
            }
        }
        j=0;
            str1[k]=str[n-1];
            str1[k+1]='\0';
            for(j=0;str[j]!='\0';j++)
            {
                if(str3[0]==str1[j])
                {
                    for(k=0;k<4;k++)
                    {
                        if(str1[j+k]==str3[k])
                            count++;
                        if(str1[j+k]!=str3[k])
                        {
                            count=0;
                            k=4;
                        }
                        if(count==4)
                            break;
                    }
                }
            }
            if(count==4)
                printf("YES\n");
            else
                printf("NO\n");
                printf("%s",str1);
       }
    }
}
