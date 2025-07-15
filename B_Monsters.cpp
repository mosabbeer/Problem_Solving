#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 1], i;
        vector<pair<int, int>> p(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            p[i].first = a[i] % k;
            p[i].second = i;
            if(a[i]%k==0)
            cout<<i+1<<" ";
        }
        sort(p.begin(),p.end());
        //reverse(p.begin(),p.end());
        for(i=0;i<n;i++)
        {
            if(p[i].first!=0)
            cout<<p[i].second+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}