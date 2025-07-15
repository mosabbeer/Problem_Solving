#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    ll a[n+1],i,p=0;
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(i=n-2;i>=0;i--)
    {
        if(a[n-1]%a[i]!=0)
        {
            p=1;
            break;
        }
    }
    if(p==1)
    cout<<a[n-1]<<" "<<a[i];
    else
    return 0;
}