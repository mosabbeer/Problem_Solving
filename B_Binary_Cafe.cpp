#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,d;
        cin>>n>>k;
        if(k>32)
        k=32;
        d=pow(2,k)+.0001;
        cout<<min(n+1,d)<<endl;
    }
    return 0;
}