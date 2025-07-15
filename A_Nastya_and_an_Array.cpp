#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    int a[100006]={0},b[100006]={0},p,i,max=0,max1=0;
    ll count=0;
    for(i=1;i<=n;i++)
    {
        cin>>p;
        if(p>max1)
        max1=p;
        if(p>0)
        a[p]=1;
        else
        b[-1*p]=1;
        if(p<0)
        p=-1*p;
        if(p>max)
        max=p;
    }
    for(i=1;i<=max1;i++)
    {
        if(a[i]==1)
        count++;
    }
    for(i=1;i<=max;i++)
    {
        if(b[i]==1)
        count++;
    }
    cout<<count;
    return 0;
}