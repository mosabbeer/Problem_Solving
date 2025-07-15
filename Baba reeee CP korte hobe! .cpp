#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1],b[n+1],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        if(a[n-1]-b[0]>0)
        {
            cout<<"NO\n";
        }
        else
        cout<<"YES\n";

    }
    return 0;
}