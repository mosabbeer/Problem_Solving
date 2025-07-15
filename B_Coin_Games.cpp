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
        int count=0,i;
        for(i=0;i<n;i++)
        {
            if(str[i]=='U')
            count++;
        }
        if(count%2==0)
        {
            cout<<"NO\n";
        }
        else
        cout<<"YES\n";
    }
    return 0;
}