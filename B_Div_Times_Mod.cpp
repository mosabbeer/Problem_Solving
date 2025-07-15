#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,k;
    cin>>n>>k;
    ll i,p;
    for(i=k-1;i>0;i--)
    {
        if(n%i==0)
        break;
    }
    p=(n/i)*k+i;
    cout<<p<<endl;
    return 0;
}