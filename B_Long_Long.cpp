#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+1],sum=0,count=0,i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
            sum=sum-a[i];
            else
            sum=sum+a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                while(a[i]<=0)
                i++;
                count++;
            }
        }
        cout<<sum<<" "<<count<<endl;
    }
    return 0;
}