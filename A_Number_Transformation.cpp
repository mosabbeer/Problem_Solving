#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(y%x!=0)
        {
            cout<<"0 0\n";
        }
        else
        {
            cout<<"1 "<<y/x<<endl;
        }
    }
    return 0;
}