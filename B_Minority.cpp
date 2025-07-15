#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int c0=0,c1=0,i;
        string str;
        cin>>str;
        for( i=0;i<str.size();i++){
            if(str[i]=='1')
            c1++;
            else
            c0++;
        }
        if(c1>c0)
        cout<<c0<<endl;
        else if(c1<c0)
        cout<<c1<<endl;
        else if(c1==c0)
        cout<<c1-1<<endl;
    }
    return 0;
}