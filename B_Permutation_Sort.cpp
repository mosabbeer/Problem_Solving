#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+1],i,possition,min=999,val=0;
        cin>>a[1];
        for(i=2;i<=n;i++){
            cin>>a[i];
            if(a[i]<a[i-1])
            val++;
            if(a[i]<min){
                min=a[i];
            }
        }
        if(val==0){
            cout<<"0\n";
        }
        else{
            if(min>a[1])
            cout<<"1\n";
            else
            cout<<"2\n";
        }
    }
    return 0;
}