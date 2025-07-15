#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+1],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
            a[i]=-1*a[i];
        }
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                cout<<a[i]<<" ";
            }
            else
            cout<<-1*a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}