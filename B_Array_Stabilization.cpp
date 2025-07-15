#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    ll a[n],sum=0,i;
    for(i=0;i<n;i++)
    cin>>a[i];
    if(n<=2)
    sum=0;
    else
    {
        sort(a,a+n);
        ll p=a[n-2]-a[0];
        sum=a[n-1]-a[1];
        if(p<=sum)
        sum=p;
    }
         cout<<sum;
    return 0;
}