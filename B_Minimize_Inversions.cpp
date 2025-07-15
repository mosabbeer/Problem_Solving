#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
         int i,n;
        cin>>n;
        pair<int, int >p[n];
       
        for(i=0;i<n;i++)
        {
            cin>>p[i].first;
        }
        for(i=0;i<n;i++)
        {
            cin>>p[i].second;
        }
        sort(p,p+n);
        for(i=0;i<n;i++)
        {
            cout<<p[i].first<<" ";
        }
        cout<<endl;
        for(i=0;i<n;i++)
        {
            cout<<p[i].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}