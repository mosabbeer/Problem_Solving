#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+1],i;
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        for(i=n-1;i>=0;i--)
        cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}