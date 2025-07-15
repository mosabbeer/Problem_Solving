#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,a[200000],i,min=1000000000,p,q=0,r=0,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(min>=a[i])
        {
            min=a[i];
            p=i;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==min)
        {
            q=i;
            break;
        }
    }
    sum=sum+min*n;
    if(p==q)
    sum=sum+n-1;
    else{
        sum=sum+n-p+q-1;
    }
    cout<<sum;
    return 0;
}