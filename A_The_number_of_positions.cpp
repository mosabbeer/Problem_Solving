#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,a,b,p,q;
    cin>>n>>a>>b;
    p=n-a;
    b++;
    if(p<=b)
    cout<<p;
    else
    cout<<b;
    return 0;
}