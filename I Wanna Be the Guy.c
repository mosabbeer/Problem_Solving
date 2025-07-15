#include<stdio.h>
int main()
{
    int a[1000],b[1000],c[2000],i,j,k,n1,n2,count=0,n;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=0;j<n;j++)
        scanf("%d",&b[j]);
        i=0;
        j=0;
    for(k=0;k<n;k++)
    {
      c[k]=a[i];
      i++;
    }
    c[0]=0;
    c[n]=0;
    for(k=n;k<=n*2-2;k++)
    {
        c[k]=b[j];
        j++;
    }
        for(i=0;i<n*2-2;i++)
        {
            for(j=i+1;j<=n*2-2;j++)
            {
                if(c[i]==c[j])
                    c[j]=0;
            }
        }

        for(i=0;i<=n*2-2;i++)
        {
            if(c[i]>0)
                count++;
        }
        if(count==n)
            printf("I become the guy.");
            else
            printf("Oh, my keyboard!");

}
