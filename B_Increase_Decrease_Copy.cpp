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
        ll a[n+2],b[n+3],i,sum=0,p=0,q,s=0,min=99999999999;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<=n;i++)
        cin>>b[i];
        for(i=0;i<n;i++)
        {
            q=a[i]-b[i];
            if(q<0)
            q=-1*q;
            sum=sum+q;
            if((a[i]<=b[n]&&b[n]<=b[i])||(a[i]>=b[n]&&b[i]<=b[n]))
            p=1;
            s=b[n]-a[i];
            if(s<0)
            s=-1*s;
            if(s<min)
            min=s;
            s=b[n]-b[i];
            if(s<0)
            s=-1*s;
            if(s<min)
            min=s;
        }
        if(p==1)
        cout<<sum+1<<endl;
        else
        cout<<sum+min+1<<endl;
       
    }
    return 0;
}