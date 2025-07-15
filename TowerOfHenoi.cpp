#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
void towerofhenoi(int n,char source ,char auxilary,char destination)
{
    if(n==1)
    {
        printf("Move disk 1 %c to %c\n",source,destination);
        return;
    }
    else
    {
        towerofhenoi(n-1,source,destination,auxilary);
        printf( "disk %d from %c to %c\n",n,source,destination);
        towerofhenoi(n-1,auxilary,source,destination);
    }
}
int main()
{
    int n;
    cin>>n;
    towerofhenoi(n,'A','B','C');
    return 0;
}