#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int a,b,x,y,n,p,q,d;
    cin>>a>>b>>x>>y>>n;
    p=a;
    q=b;
    d=n;
    int l;
    l=p-x;
    if(l>=d)
    {
        p=a-d;
        d=0;
    }
    else
    {
        p=a;
        d=d-l;
        l=p-y;
    if(l>=d)
    {
        q=a-d;
        d=0;
    }
    }
    return 0;
}