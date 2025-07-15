#include<stdio.h>
int main()
{
    int t,arr[100],n,i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int count=0;
        scanf("%d ",&n);
        for(j=0;j<n;j++)
            scanf("%d",&arr[j]);
        for(j=0;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(arr[j]==arr[k])
                    arr[k]=-1*arr[k];
            }
        }
        for(j=0;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if((arr[j]==arr[k])&& arr[j]!=101)
                {
                    arr[k]=101;
                    count++;
                }
            }
        }
        printf("%d\n",n-count);
    }
    return 0;
}
