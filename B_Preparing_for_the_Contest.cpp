#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
int t;
cin>>t;
while(t--){
    int n,k,p;
    cin>>n>>k;
    int i,a[n+1];
    p=n;
    for(i=0;i<n;i++)
    {
        a[i]=p;
        p--;
    }
    sort(a,a+k+1);
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}