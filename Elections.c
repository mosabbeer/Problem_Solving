#include<stdio.h>
int main()
{
    int test,i;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        int a[3],j,max=0,p,count=0;
        for(j=0;j<3;j++)
        scanf("%d",&a[j]);
          for(j=0;j<3;j++)
          {
              if(max<a[j])
              {
                max=a[j];
                p=j;
              }
          }
          for(j=0;j<3;j++)
          {
              if(max==a[j])
                count++;
          }
          if(count==1)
          {
              for(j=0;j<3;j++)
                a[j]=max+1-a[j];
                a[p]=0;
          }
          else
          {
              max++;
              for(j=0;j<3;j++)
                a[j]=max-a[j];
          }
          for(j=0;j<3;j++)
            printf("%d ",a[j]);
            printf("\n");
    }

}
