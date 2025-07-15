#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],min=1000000000,i,p;
        cin>>a[1];
        for(i=2;i<=n;i++){
            cin>>a[i];
            p=a[i]-a[i-1];
            if(p<min)
            min=p;
        }
        if(min<0)
        cout<<"0\n";
        else{
            cout<<min/2+1<<endl;
        }
    }
    return 0;
}