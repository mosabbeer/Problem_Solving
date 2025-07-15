#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, i, m, j, min = 999999999, p, sum = 0, min1 = 999999999;
        cin >> n;
        vector<vector<ll>> a(n+1);
        for (i = 0; i < n; i++)
        {
            cin >> m;
            for (j = 0; j < m; j++)
            {
                cin >>p;
                a[i].push_back(p);
            }
            sort(a[i].begin(), a[i].end());
            sum = sum + a[i][1];
            
            if (min > a[i][1])
            {
                min = a[i][1];
            }
            if (min1 > a[i][0])
            {
                min1 = a[i][0];
            }
        }
        sum=sum-min+min1;
        cout << sum<< endl;
    }
    return 0;
}