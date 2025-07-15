#include<bits/stdc++.h>
using namespace std;
#define ll long long
int summation(int a[],int positon,int size)
{
    if(positon==size)
    return INT_MIN;
    return max(a[positon],summation(a,positon+1,size));
}

int main(){
    int n,i;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)
    cin>>a[i];
    ll sum;
    sum=summation(a,0,n);
    cout<<sum;
    return 0;
}