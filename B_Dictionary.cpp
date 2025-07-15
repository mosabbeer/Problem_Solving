#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int i,sum=0,sum1=0;
        sum=(str[0]-97)*25;
        if(str[0]<str[1])
        sum1=(str[1]-97);
        else
        sum1=(str[1]-97)+1\;
        cout<<sum+sum1<<endl;
    }
    return 0;
}