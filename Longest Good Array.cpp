#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        ll dif ,ans;
        cin>>a>>b;
        dif=b-a;
        ans= (-1+sqrt(1+8*dif))/2;
        cout<<ans+1<<endl;
    }
    return 0;
}