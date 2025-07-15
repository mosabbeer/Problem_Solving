#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,p;
        cin>>n>>k;
        p=n*k;
        ll a[p+1],i,sum=0,count=0;
        for(i=0;i<p;i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            for(i=0;i<n*k;i++)
            sum=sum+a[i];
            cout<<sum<<endl;
        }
        else if(n==2)
        {
            for(i=0;i<n*k;i=i+2)
            {
            sum=sum+a[i];
           // cout<<sum<<endl;
            }
            cout<<sum<<endl;
        }
        else
        {
            reverse(a,a+p);
            
            for(i=n/2;i<=p;i=i+n/2+1)
            {
            sum=sum+a[i];
            count++;
            if(count==k)
            break;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}