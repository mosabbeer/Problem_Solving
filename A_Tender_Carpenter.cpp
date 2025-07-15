#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],i,p=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<n;i++)
        {
            if((a[i]*2>a[i-1])&&(a[i-1]*2>a[i]))
            {
                p=1;
                break;
            }
        }
        if(p==1)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
    return 0;
}