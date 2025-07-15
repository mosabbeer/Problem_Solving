#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<3)
        {
            cout<<n<<endl;
        }
        else if(n==7 || n==4)
        cout<<"1\n";
        else
        cout<<"0\n";
    }
    return 0;
}