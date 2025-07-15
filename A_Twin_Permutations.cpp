#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,p;
        cin>>n;
        int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cout<<n+1-a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}