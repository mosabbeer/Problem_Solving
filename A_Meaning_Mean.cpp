#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],i,temp=0;
        for(i=0;i<n ;i++)
        cin>>a[i];
        sort(a,a+n);
        temp=a[0];
        for(i=1;i<n;i++)
        {
            temp=(temp+a[i])/2;
        }
        cout<<temp<<endl;

    }
    return 0;
}