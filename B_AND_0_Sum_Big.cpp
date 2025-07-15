#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll base,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p%2==1)
        {
            ans=(ans*base)%mod;
            p--;
        }
        else{
            base=(base*base)%mod;
            p=p/2;
        }
    }
    return ans%mod;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        cout<<power(n,k)<<endl;
    }
    return 0;
}