#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],b[n+1],l,r;
        cin>>l>>r;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        ll sum1=0,sum2=0;
        sort(a,a+r);
        for(int i=0;i<l-r+1;i++)
        sum1=sum1+a[i];
        sort(b+l,b+n);
        for(int i=l;i<n;i++)
        sum2=sum2+b[i];
        cout<<min(sum1,sum2)<<endl;
    }
    return 0;
}