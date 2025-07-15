#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        ll a[n+1],b[m+1];
        int i,count=0,j;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<m;i++)
        cin>>b[i];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if((a[i]+b[j])<=k)
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}