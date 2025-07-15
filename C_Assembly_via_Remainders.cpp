#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],b[n+5],i,sum=501;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<sum<<" ";
        for(i=0;i<n-1;i++)
        {
            sum=sum+a[i];
            if(a[i]==0)
            sum=sum*2;
            cout<<sum<<" ";        
        }
        cout<<endl;
    }
    return 0;
}