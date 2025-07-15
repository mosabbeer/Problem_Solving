#include<stdio.h>
#include<conio.h>
int x[5][5]={{1,2,3,4,5},{6,7,8,9,7},{0,1,2,3,4},{5,6,2,8,9},{8,7,6,5,4}};
int i,j,k,l,tmp,big,p;
main()
{
    for(i=0;i<=4;i++)
    {
        for(j=i;j<=4;j++)
        {
            for(k=1;k<=4;k++)
            {
                for(l=k;l<=4;l++)
                {
                    x[k][l]=x[k][l]+1;
                }
            }
        }
    }
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
            printf("%d ",x[i][j]);
        printf("\n");
    }
}
