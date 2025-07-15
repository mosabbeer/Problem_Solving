#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,q;
    cin>>n>>q;
    vector<vector<int>>V;
    
    int i,j,k,x;
    for(i=0;i<n;i++)
    {
        vector<int>a;
        cin>>k;
        for(j=0;j<k;j++)
        {
            cin>>x;
            a.push_back(x);
        }
        V.push_back(a);
    }
    while(q--)
    {
        int s,t;
        cin>>s>>t;
        cout<<V[s][t]<<endl;
    }
   
    return 0;
}