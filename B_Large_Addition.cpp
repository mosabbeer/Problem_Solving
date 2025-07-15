#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n,p=0;
        n=str.length();
        if(str[0]!='1' || str[n-1]=='9')
        cout<<"NO\n";
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(str[i]=='0')
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
    }
    return 0;
}