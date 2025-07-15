#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   
        int n;
        cin>>n;
        map<ll,ll>m;
        vector<int>dif;
        for(int i=0;i<n;i++)
        {
            ll x,y;
            cin>>x>>y;
            m[x]++;
            m[y+1]--;
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            auto nx=next(it);
            if(nx!=m.end)
            {
                nx->second=nx->second+it->second;
                ll x=it->second;
                ll a=nx->first;
                ll b=nx->second;
                dif[x]+=(a-b);
            }
        }
        for(ll i=dif.begin();i<dif.end();i++)
        cout<<dif[i]<<" ";
    return 0;
}