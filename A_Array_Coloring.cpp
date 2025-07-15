#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,countodd=0;
        cin>>n;
        int a[n+1],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
            countodd++;
        }
        if(countodd%2!=0)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}