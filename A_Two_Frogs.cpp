#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        a=a-b;
        if(a%2==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}