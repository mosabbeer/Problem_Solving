#include<stdio.h>
int main()
{
    int a,b,i,j,p;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++)
    {
        p=i/2;
        for(j=0;j<b;j++)
        {
            if(i%2==0)
                printf("#");
            else
            {
                if(p%2==0 && j<b-1)
                {
                    printf(".");

                }
                else if(p%2==0 && j==(b-1))
                    printf("#");
                else if(p%2!=0 && j>0)
                printf(".");
                else if(p%2!=0 && j==0)
                    printf("#");
            }
        }
        printf("\n");
    }
}
