#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+1],i,x=-1,l=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1;i<n;i++)
        {
            if(a[i]%a[0]!=0)
            {
                x=a[i];
                break;
            }
        }
        if(x==-1)
        cout<<"Yes\n";
        else
        {
            for(i=1;i<n;i++)
            {
                if((a[i]%a[0]!=0)&& (a[i]%x!=0))
                {
                    l=1;
                    break;
                }
               
            }
             if(l==0)
                cout<<"Yes\n";
                else
                cout<<"No\n";
        }
    }
    return 0;
}