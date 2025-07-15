#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+5]={0},i;
        for(i=0;i<n;i++)
        {
            int p;
            cin>>p;
            a[p]++;
        }
        for(i=1;i<=n;i++)
        {
            a[i]=a[i]/2;
        }
        int sum=0;
        for(i=1;i<=n;i++)
        {
            sum=sum+a[i];
        }
        cout<<sum<<endl;
        
    }
    return 0;
}