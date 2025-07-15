#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int a[n+1],b[n+1],p,q,max=-99,r;
        for(i=1;i<=n;i++){
            cin>>p>>q;
            a[i]=p;
            if(p>10)
            q=-69;
            b[i]=q;
        }
        for(i=1;i<=n;i++){
            if(b[i]>max){
                max=b[i];
                r=i;
            }
        }
        cout<<r<<endl;
        
    }
    return 0;
}