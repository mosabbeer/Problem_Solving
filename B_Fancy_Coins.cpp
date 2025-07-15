#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,a1,a2,sum=0,p=0,q,big;
        cin>>n>>k>>a1>>a2;
        big=a2*k;
        if(big>n)
        big=(n/k)*k;
        sum=a1+big;
        if(sum>=n)
        cout<<"0\n";
        else
        {
            sum=n-sum;
            p=sum%k;
                p=0;
                sum=sum+k;
            cout<<sum/k+p<<endl;
        }
    }
    return 0;
}