#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int ca=0,cb=0;
        string str;
        cin>>str;
        for(int i=0;i<5;i++)
        {
            if(str[i]=='A')
            ca++;
            else
            cb++;
        }
        if(ca>cb)
        cout<<"A\n";
        else
        cout<<"B\n";
    }
    return 0;
}