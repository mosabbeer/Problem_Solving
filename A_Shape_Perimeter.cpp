#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y,q=0;
        cin>>n>>m;
        int s=m,p=m;
        while(n--)
        {
            cin>>x>>y;
            if(q!=0)
            {
            s=s+x;
            p=p+y;
            }
            q=1;

        }
        cout<<2*(s+p)<<endl;
        
    }
    return 0;
}