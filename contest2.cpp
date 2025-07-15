#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, l, r;
        ll sum1 = 0, sum2 = 0, i;
        cin >> n >> l >> r;
        vector<int> a(n);
        vector<int> b;
        vector<int> c;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (i = 0; i < r; i++)
            b.push_back(a[i]);
        for (i = l - 1; i < n; i++)
            c.push_back(a[i]);
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        for (int i = 0; i < (r - l) + 1; i++)
            sum1 = sum1 + b[i];
        for (int i = 0; i < (r - l) + 1; i++)
            sum2 = sum2 + c[i];
        cout << min(sum1, sum2) << endl;
    }
    return 0;
}