#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       ll a[n+1],i,max=-1,min=439245934924;
       for(i=0;i<n;i++)
       {
        cin>>a[i];
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
       } 
       cout<<max-min<<endl;
    }
    return 0;
}