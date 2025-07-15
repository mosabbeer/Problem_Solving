#include<bits/stdc++.h>
#include<numeric>
using namespace std;
#define ll long long

int main(){
    ll n,a,b=0,i;
    cin>>n;
for(i=0;i<n;i++)
{
    cin>>a;
    b=__gcd(a,b);
}
cout<<b;
    return 0;
}