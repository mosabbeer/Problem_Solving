#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,sum=0,i,p;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>p;
        p=p%n;
            sum=sum+p;
            sum=sum%n;
        }
        if(sum%n==0|| sum==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
    return 0;
}