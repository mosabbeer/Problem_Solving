#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,c0=0,i,p=0;
        cin>>n;
        int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
            if(a[i]==0)
            c0++;
        }
        if(c0==0)
        {
            if(sum!=0)
            cout<<"0\n";
            else
            cout<<"1\n";
        }
        else
        {
            sum=sum+c0;
            p=c0;
            if(sum==0)
            cout<<p+1<<endl;
            else
            cout<<p<<endl;
        }
    }
    return 0;
}