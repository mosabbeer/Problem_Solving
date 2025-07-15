#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int a[n+1];
        if(n%2==0)
        {
            for(i=1;i<=n;i++)
            {
                if(i%2!=0)
                a[i]=i+1;
                else 
                a[i]=i-1;
            }
        }
        else
        {
            for(i=1;i<n;i++)
            {
                if(i%2!=0)
                a[i]=i+1;
                else 
                a[i]=i-1;
            }
            a[n]=a[n-2];
            a[n-2]=n;
        }
        for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}