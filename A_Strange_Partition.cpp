#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        ll a[n+1],i,sum=0,max=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
            if(a[i]%k!=0)
            max=max+a[i]/k+1;
            else
            max=max+a[i]/k;
        }
        if(sum%k==0)
        sum=sum/k;
        else
        sum=sum/k+1;
        cout<<sum<<" "<<max<<endl;
    }
    return 0;
}