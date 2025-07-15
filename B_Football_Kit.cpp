#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,t;
    cin>>n;
    int h[200000]={0},a[n+1],i,p,l,s,d;
    for(i=1;i<=n;i++)
    {
        cin>>p>>a[i];
        h[p]++;
    }
    for(i=1;i<=n;i++)
    {
        s=n-1;
        d=h[a[i]];
        if(a[i]==0)
        d=0;
        cout<<s+d<< " "<<s-d<<endl;
    }
    return 0;
}