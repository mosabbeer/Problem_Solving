#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i,j=0;
        for(i=1;i<=n;i++)
        {
            cout<<i+j<<" ";
            j++;
        }
        cout<<endl;
    }
    return 0;
}