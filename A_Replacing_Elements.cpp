#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+1],i,sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=k)
            sum++;
        }
        if(sum==n)
        cout<<"YES\n";
        else
        {
            sort(a,a+n);
            if(a[0]+a[1]<=k)
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
    }
    return 0;
}