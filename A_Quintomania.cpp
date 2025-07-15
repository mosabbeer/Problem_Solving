#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],i,p=0,l;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=1;i<n;i++)
        {
            l=a[i]-a[i-1];
            if(l<0)
            l=-1*l;
            if(l!=5 && l!=7)
            {
                p=1;
                break;
            }
        }
        if(p==1)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}