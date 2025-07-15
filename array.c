#include<stdio.h>
int main()
{
    int i,a[10],odd=0,even=0,O_sum=0,E_sum=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
       even=even+1;
       E_sum=E_sum+a[i];
        }
       else
       {
        odd=odd+1;
        O_sum=O_sum+a[i];
       }
    }
    printf("even number %d\n",even);
    printf("
           odd number %d\n",odd);
    printf("Even sum=%d\n",E_sum);
    printf("Odd sum= %d",O_sum);
    return 0;
}
