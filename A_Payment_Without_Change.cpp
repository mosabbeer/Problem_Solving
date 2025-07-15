#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,n,S,i=1,mod;
        cin>>a>>b>>n>>S;
        if(a*n<S)
        {

            S=S-a*n;
            if(S-b==0)
            cout<<"YES\n";
            else
            cout<<"NO\n";
          
        }
        else
        {
           S=S-b;
           n=n-b;
           if(S%a==0)
           {
            if(S/a==n)
            cout<<"YES\n";
            else
        cout<<"NO\n";
           }
           else
           cout<<"NO\n";
        }
        
    }
    return 0;
}