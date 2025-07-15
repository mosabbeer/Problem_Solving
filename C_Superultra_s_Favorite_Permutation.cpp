#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=4)
        cout<<"-1\n";
        else
        {
            int i;
            for(i=1;i<=n;i=i+2)
            {
                if(i!=5)
                cout<<i<<" ";
            }
            cout<<"5 4 ";
            for(i=2;i<=n;i=i+2)
            {
                if(i!=4)
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}