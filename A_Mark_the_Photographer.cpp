#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, p = 0;
        cin >> n >> k;
        n = 2 * n;
        ll a[n + 1], i;
        for (i = 0; i <  n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (i = n - 1; i > 0; i = i - 2)
        {
            if (a[i] - a[i - 1] > k)
            {
                p = 1;
                break;
            }
        }
        if (p == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}