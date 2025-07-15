#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int i,p=0;
        for(i=0;i<n;i++)
        {
            if(str[i]=='0')
            {
              p=1;
                break;
            }
        }
        if(p==1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}