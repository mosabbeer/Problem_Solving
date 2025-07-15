#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        n=2*n;
        ll a[n+1],i,sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i=i+2)
        sum=sum+a[i];
        cout<<sum<<endl;
    }
    return 0;
}