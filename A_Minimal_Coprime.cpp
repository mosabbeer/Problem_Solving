#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b && a==1)
        cout<<"1\n";
        else
        cout<<b-a<<endl;
    }
    return 0;
}