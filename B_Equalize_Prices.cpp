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
        ll a[n + 1], i, B = 0, d;
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        d = a[0] + k;
        if (d >= a[n - 1])
        {
            if (d - a[n - 1] <= k)
            {
                B = d;
            }
            else
                B = -1;
        }
        else
        {
            if (a[n - 1] - d <= k)
                B = d;
            else
                B = -1;
        }
        cout << B << endl;
    }
    return 0;
}