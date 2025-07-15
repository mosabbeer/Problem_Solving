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
        int ss=0,pp=0,i,index=0,s=0,p=-1;
        for(i=0;i<str.length();i++)
        {
            if(str[i]=='s')
            {
                ss++;
                s=index;
            }
            else if(str[i]=='p')
            {
                pp++;
                if(p==-1)
                p=index;
            }
            index++;
        }
        if(pp==0 || ss==0)
        cout<<"YES\n";
        else if(s==0 || p==n-1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}