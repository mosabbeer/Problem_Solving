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
    for(i=2;i<n;i++)
    {
        if(a[i]<a[i-1]+a[i-2])
        {
            p=1;
            break;
        }
    }
    if(p==1)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}