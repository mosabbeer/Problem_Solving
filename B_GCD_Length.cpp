#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a[20]={0,1,11,101,1013,10099,102653,1000313,10000511,100000469};
        int c,d,e;
        cin>>c>>d>>e;
        if(e==1)
        cout<<a[c]<<" "<<a[d]<<endl;
    }
    return 0;
}