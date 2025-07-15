#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,k,x,i;
    cin>>n>>k>>x;
    int sum=0,p,a[n+1];
    p=n-k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(p>0)
        {
            sum=sum+a[i];
            p--;
        }
    }
    cout<<sum+k*x;
    return 0;
}