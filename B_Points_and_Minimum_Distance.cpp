#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n=2*n;
        int a[n+1],sum=0,i;
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        for(i=1;i<n/2;i++)
        {
            sum=sum+a[i]-a[i-1]+a[i+n/2]-a[i+n/2-1];
        }
        cout<<sum<<endl;
        for(i=0;i<n/2;i++)
        {
          cout<<a[i]<<" "<<a[i+n/2]<<endl;
        }
    }
    return 0;
}