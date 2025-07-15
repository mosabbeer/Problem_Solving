#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+1],i,sum=0,max=-2,max1=-2,p=0;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
            max=a[i];
            p=max-a[i];
            sum=sum+p;
            if(p>max1)
            max1=p;
        }
        cout<<sum+max1<<endl;
    }
    return 0;
}