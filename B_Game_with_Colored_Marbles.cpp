#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+10]={0},i,p,count=0,sum=0;
        for(i=0;i<n;i++)
        {
            cin>>p;
            a[p]++;
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]>1)
            sum++;
            if(a[i]==1)
            count++;
        }
        if(count%2!=0)
        count++;
        cout<<sum+count<<endl;
    }
    return 0;
}