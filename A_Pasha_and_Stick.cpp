#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    if(n%2!=0)
    cout<<"0";
    else
    {
    n=n/2;
    if(n%2==0)
    cout<<n/2-1;
    else
    cout<<n/2;
    }
    return 0;
}