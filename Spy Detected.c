#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j,k,count=0,p;
        scanf("%d",&n);
        int arr[n];
        for(j=0;j<n;j++)
            scanf("%d",&arr[j]);
            if(arr[0]!=arr[n-1] && arr[0]!=arr[n-2])
                p=1;
            else
                {
        for(j=0;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(arr[j]==arr[k])
                {
                    arr[k]=0;
                }
            }
        }


            for(j=1;j<n;j++)
                if(arr[j]!=0)
                {
                p=j+1;
                }
                }
        printf("%d\n",p);
    }
    return 0;
}
