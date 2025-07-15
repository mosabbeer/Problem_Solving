#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        char str;
        int n,p,i,j;
        for(i=0;i<8;i++){
            for(j=0;j<8;j++)
            {
            cin>>str;
            if(str!='.')
            cout<<str;
            }
        }
        cout<<endl;
    }
    return 0;
}