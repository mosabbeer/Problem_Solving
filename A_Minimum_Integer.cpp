#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c,p;
        cin>>a>>b>>c;
        if(c<a)
        {
            cout<<c<<endl;
        }
        else
        {
            p=b/c;
            cout<<(p+1)*c<<endl;
        }
    }
    return 0;
}