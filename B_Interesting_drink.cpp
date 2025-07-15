#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<ll>cal(v.back()+1);
    ll q=0,j=0;
    for(int i=0;i<=v.back();i++){
        if(v[j]==i){
            while (v[j]==i && j<n)
            {
                q++;
                cal[i]=q;
                j++;
            }
        }else{
            cal[i]=q;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        ll a, cnt = 0;
        cin >> a;
        
        if(a>v.back())cout<<cal[v.back()]<<endl;
        else
        cout << cal[a] << endl;
    }
    return 0;
}