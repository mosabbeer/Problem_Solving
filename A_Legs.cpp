#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p;
        p=n%4;
        if(p!=0)
        cout<<n/4+1<<endl;
        else
        cout<<n/4<<endl;
    }
    return 0;
}