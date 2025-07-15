#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+1],sum=0,i,count=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]!=1)
            {
            sum=sum+a[i]-1;
            }
            else
            count++;
        }
        if(n==1)
        cout<<"NO\n";
        else if(count>sum)
        cout<<"NO\n";
        else
        cout<<"YES\n";
       // cout<<sum<<endl;
    }
    return 0;
}