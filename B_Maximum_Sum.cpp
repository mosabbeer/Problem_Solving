#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,i;
        cin>>n>>k;
        ll sum=0,a[n+1],b[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
            b[i]=sum;
        }
        while(k--)
        {
            i=0;
            if(b[i]+b[i+1]>=b[n-1]-b[n-2])
            {
                b[n-1]=0;
                n--;
            }
            else
            {
                a[i+1]=0;
                i=i+2;
            }
        }
    }
    return 0;
}