#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+1],i,count=0,sum=0,max;
        for(i=0;i<n;i++)
        cin>>a[i];
        if(a[0]==0)
        count=1;
        max=a[0];
        sum=a[0];
        for(i=1;i<n;i++)
        {
            sum=sum+a[i];
            if(a[i]>max)
            max=a[i];
            if((sum-max)==max)
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}