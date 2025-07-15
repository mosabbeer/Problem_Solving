#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,p,sum=0,i,q;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>p;
            sum=sum+p;
        }
        q=sqrt(sum);
        if(q*q==sum)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}