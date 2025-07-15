#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, i,d=97;
        cin>>n;
        int a[n+1]={0},b[n+1];
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(i=0;i<n;i++)
        {
            cout<<char(d+a[b[i]]);
            a[b[i]]++;
        }
        cout<<endl;
    }
    return 0;
}