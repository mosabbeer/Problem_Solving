#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        
    ll n,a[200000],sum=0,p;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    sort(a,a+n);
        if(a[0]>=0)
        cout<<sum<<endl;
        else
        {
            if(a[0]<0 && a[1]<=0)
            {
                sum=sum-2*(a[0]+a[1]);
                cout<<sum<<endl;
            }
            else if((-1*a[0])>a[1])
            {
                sum=sum-2*(a[0]+a[1]);
                cout<<sum<<endl;
            }
            else
            cout<<sum<<endl;
        }
    }

    return 0;
}