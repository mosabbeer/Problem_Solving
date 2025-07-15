#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    vector<int>v[n+1];
    int i,j,s;
    for(i=0;i<n;i++)
    {
        int m;
        cin>>m;
        for(j=0;j<m;j++)
        {
            cin>>s;
            v[i].push_back(s);
        }
    }
    vector <int>l;
    for(i=0;i<n;i++)
    {
        cin>>s;
        l.push_back(s);
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<v[l[i]-1].size();j++){
        cout<<v[l[i]-1][j]<<" ";
      } 
    }
    return 0;
}