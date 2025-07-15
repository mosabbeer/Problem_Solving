#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,i,p;
    cin>>n;
    int a[n+1],c0=0,c5=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        c0++;
        else
        c5++;
    }
    if(c0==0)
    cout<<"-1";
    else
    {
        if(c5<9)
        cout<<0;
        else
        {
            p=c5-c5%9;
            for(i=1;i<=p;i++)
            cout<<"5";
            for(i=1;i<=c0;i++)
            cout<<"0";
        }
    }
    return 0;
}