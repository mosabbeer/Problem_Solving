#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int i,a[n+1],b[n+1];
        pair<int, int>p;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]<0)
            b[i]=-1*b[i];
        }
        for(i=0;i<n;i++)
        p.first[i]=b[i];
        for(i=0;i<n;i++)
        p.second[i]=a[i];
    }
    return 0;
}