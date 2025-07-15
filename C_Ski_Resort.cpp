#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        k--;
        ll a[n+10],i,sum=0,count=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        a[n]=q+1;
        for(i=0;i<=n;i++)
        {
            if(a[i]<=q)
            count++;
            else
            {
                if(count>=k)
                sum=sum+((count-k)*(count+1-k))/2;
                count=0;
            }
        }
        cout<<sum<<endl;

    }
    return 0;
}