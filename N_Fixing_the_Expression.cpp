#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if(str[0]>str[2])
        str[1]='>';
        else if(str[0]<str[2])
        str[1]='<';
        else
        str[1]='=';
        cout<<str<<endl;
    }
    return 0;
}