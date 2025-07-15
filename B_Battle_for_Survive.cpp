#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+1],sum=0,i,p;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(i<=n-2)
            sum=sum+a[i];
        }
        p=a[n-1]-sum;
        sum=a[n]-p;
        cout<<sum<<endl;
    }
    return 0;
}