#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i,x,a[n+5],s=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<n;i++)
        {
            x=min(a[i],a[i-1]);
            a[i]=a[i]-x;
            a[i-1]=a[i-1]-x;
            if(a[i-1]>a[i])
            {
                s=1;
                break;
            }
        }
        if(s==1)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}