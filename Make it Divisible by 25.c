#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[100];
        int n,i,p=0,a[18],b[18],j=0,k=0,q=0,r=0,sum1=0,sum2=0;
        scanf("%s",str);
        n=strlen(str);
        if((str[n-1]=='0')&&(str[n-2]=='0'||str[n-2]=='5'))
           printf("0");
        else if((str[n-1]=='5')&&(str[n-2]=='2'||str[n-2]=='7'))
                printf("0");
        else
        {
           for(i=n-1;i>=0;i--)
           {
               if(str[i]=='0')
               {
                  a[j]=i;
                  j++;
                  q=1;
               }
               else if(str[i]=='5')
               {
                  b[k]=i;
                  k++;
                  r=1;
               }
               if(q==1 && r==1)
                break;
           }
           if(a[0]>-1)
           {
             for(i=a[0]-1;i>=0;i--)
             {
                if(str[i]=='0' || str[i]=='5')
                {
                    p=i+2;
                    break;
                }
             }
           }
           if(b[0]>-1)
           {
             for(i=b[0]-1;i>=0;i--)
             {
                if(str[i]=='7' || str[i]=='2')
                {
                    q=i+2;
                    break;
                }
             }
           }
           sum1=n-p;
           sum2=n-q;
           if(sum1>=sum2)
            printf("%d",sum1);
           else
            printf("%d",sum2);
        }
        printf("\n");
    }
}
