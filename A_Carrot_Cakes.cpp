#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,t,k,d,sum1=0,sum2=0,time;
    cin>>n>>t>>k>>d;
    if(n%k==0){
        sum1=(n/k)*t;
    }
    else{
        sum1=(n/k+1)*t;
    }
    time=d/k;
    n=n-time*k;
    if(n%(2*k)==0){
        sum2=(n/(2*k))*t+d;
    }
    else
    {
        sum2=(n/(2*k)+1)*t+d;
    }
    if(sum2<sum1)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}