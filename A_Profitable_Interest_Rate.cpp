#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll p;
        if(a>=b)
        cout<<a<<endl;
        else
        {
            p=b-a;
            a=a-p;
            if(a<0)
            cout<<"0\n";
            else
            cout<<a<<endl;
        }
    }
    return 0;
}