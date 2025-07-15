#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a[100000],sum=0,p,i,n,sum1;
    cin>>n;
    for ( i = 0; i <n; i++)
    {
        cin>>p;
        sum=sum+p;
    }
    for(i=1;i<=n;i++)
    {
        cin>> a[i];
    }
    sort(a,a+n);
    sum1=a[n]+a[n-1];
    if(sum1>=sum)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}