//average of some odd and even number
#include<stdio.h>
void main()
{
    int i,a[10],E_avg,O_avg,E_sum=0, O_count=0,E_count=0,O_sum=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        E_avg=(E_sum= E_sum+a[i])/(E_count =E_count+1);
        else
        O_avg=(O_sum=O_sum+a[i])/(O_count=O_count+1);
    }
    printf("even average is =%d\n",E_avg);
    printf("odd average is =%d",O_avg);
}
