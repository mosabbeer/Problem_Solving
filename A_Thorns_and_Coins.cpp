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
        ll i,max=0,count=0;
        for(i=0;i<n;i++)
        {
            if(str[i]=='@')
            count++;
            if(count>max)
            max=count;
            if(str[i]=='*' && str[i+1]=='*' && i!=n-1)
            break;
        }
        cout<<max<<endl;
    }
    return 0;
}