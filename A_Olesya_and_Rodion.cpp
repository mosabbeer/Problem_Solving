#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,t;
    cin>>n>>t;
    if(n==1&& t==10)
    cout<<-1;
    else if(t==10)
    {
        cout<<"1";
        for(int i=1;i<n;i++)
        cout<<"0";
    }
    else
    for(int i=1;i<=n;i++)
    cout<<t;
    return 0;
}