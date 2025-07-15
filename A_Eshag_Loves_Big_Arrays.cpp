#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,count=0,avg;
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        avg=(a[0]+a[1])/2;
        for(i=0;i<n;i++)
        {
            if(a[i]>avg)
            break;
        }
        cout<<n-i<<endl;
    }
    return 0;
}