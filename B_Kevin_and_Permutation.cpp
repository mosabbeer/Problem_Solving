#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+10]={0}, i,p,s,d=1;
        s=n;
       for(i=1;i<=n;i++)
       {
        if(i%k==0)
        {
        a[i]=d;
        d++;
        }
        else
        {
           a[i] =s;
           s--;
        }
       }
        for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}