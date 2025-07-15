#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],i,p=0,x=-1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<n;i++)
        {
            if(a[i]<a[i-1])
            {
                x=i;
                break;
            }
        }
        for(i=x+1;i<n;i++)
        {
            if(a[i]<a[i-1])
            {
                p=1;
                break;
            }
        }
        if(x==-1)
        cout<<"Yes\n";
       else if(p==1)
        cout<<"No\n";
        else
        {
            if(a[n-1]<=a[0])
            cout<<"Yes\n";
            else
            cout<<"No\n";
        }
    }
    return 0;
}