#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,sum=0;
        cin>>n>>a>>b;
        string str;
        cin>>str;
        if(b<0)
        {
        
            sum=n*a+b;
        }
        else
        {
            sum=n*a+n*b;
        }
        cout<<sum<<endl;
    }
    return 0;
}