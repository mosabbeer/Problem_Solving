#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],i,min=32503450,p,q,r,s=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]<min)
            {
                min=a[i];
                p=i;
            }
        }
        for(i=p+1;i<=n;i++)
        {
            if(a[i]>min)
            {
                min=a[i];
                s++;
                q=i;
                break;
            }
        }
        for(i=q+1;i<=n;i++)
        {
            if(a[i]<min)
            {
                s++;
                r=i;
                break;
            }
        }
        if(s<2)
        cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            cout<<p<<" "<<r<<" "<<s<<endl;
        }
    }
    return 0;
}