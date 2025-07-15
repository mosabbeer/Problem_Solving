#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    ll a[n+1],b[n+1],i,max;
    for(i=1;i<=n;i++)
    cin>>a[i];
    max=a[n];
    b[n]=0;
    for(i=n-1;i>=1;i--)
    {
       if(max+1-a[i]<0)
       b[i]=0;
       else
       b[i]=max+1-a[i];
       if(max<a[i])
       max=a[i];
    }
    for(i=1;i<=n;i++)
    cout<<b[i]<<" ";
    return 0;
}