#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    ll count=0;
    while(n>0)
    {
        if(n%2!=0)
        count++;
        n=n/2;
    }
    cout<<count<<endl;
    return 0;
}