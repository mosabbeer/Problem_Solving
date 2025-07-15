#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j,count=0,temp;
        scanf("%d",&n);
        int array[n];
        for(j=0;j<n;j++)
        scanf("%d",&array[j]);
        for(j=1;j<n;j++)
        {
            if(array[0]==array[j])
                count++;
        }
        if(count==n-1 || n==1)
        {
            printf("NO\n");
        }
        else
        {
            for(j=0;j<n-1;j++)

                for(int k=j+1;k<n;k++)
                {
                    if(array[j]<array[k])
                    {
                       temp= array[j];
                       array[j]=array[k];
                       array[k]=temp;
                    }
                }
            temp=array[1];
               array[1]=array[n-1];
               array[n-1]=temp;
               printf("YES\n");
               for(j=0;j<n;j++)
                printf("%d ",array[j]);
                printf("\n");
        }
    }
    return 0;
}
