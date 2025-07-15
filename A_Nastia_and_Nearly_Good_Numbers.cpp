#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll A,B,x,y,z,d;
        cin>>A>>B;
        if(B==1)
        cout<<"No\n";
        else
        {
            cout<<"YES\n";
            z=A*B*10;
            x=A*(B+1);
            y=A*(10*B-B-1);
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
    return 0;
}