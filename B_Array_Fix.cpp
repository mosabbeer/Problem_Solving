#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,p=0;
        cin>>n;
        vector<int>v;
        int i,s;
        for(i=0;i<n;i++)
        {
            cin>>s;
            v.push_back(s);
        }
        for(i=n-1;i>0;i--)
        {
            if(v[i-1]>v[i])
            {
                a=v[i-1]/10;
                b=v[i-1]%10;
                  v.insert(v.begin()+i,a);
                  v.insert(v.begin()+i+1,b);
                v.erase(v.begin()+i-1);
              
            }
        }
        for(i=0;i<(v.size()-1);i++)
        {
            if(v[i]>v[i+1])
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
    return 0;
}