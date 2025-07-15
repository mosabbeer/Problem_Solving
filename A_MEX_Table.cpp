#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        b=max(a,b);
        cout<<b+1<<endl;
    }
    return 0;
}