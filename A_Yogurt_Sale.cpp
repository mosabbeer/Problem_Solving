#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int p;
        if(n==1)
        cout<<a<<endl;
        else if(2*a<b)
        cout<<a*n<<endl;
        else
        {
            if(n%2==0)
            cout<<(n/2)*b<<endl;
            else
            cout<<(n/2)*b+a<<endl;
        }
    }
    return 0;
}