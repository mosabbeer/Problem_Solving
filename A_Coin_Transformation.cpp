#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll count=1;
        while(1)
        {
            if(n<4)
            break;
            else
            n=n/4;
            count=count*2;
        }
        cout<<count<<endl;
    }
    return 0;
}