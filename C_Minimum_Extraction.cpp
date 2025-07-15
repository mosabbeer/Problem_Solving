#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n + 1], max = -98, i, diff;
        for (i = 0; i < n; i++)
            cin >> a[i];

        if (n == 1)
            cout << a[0] << endl;
        else
        {
            sort(a, a + n);
            max = a[0];
            for (i = 1; i < n; i++)
            {
                diff = a[i] - a[i - 1];
                if (diff > max)
                    max = diff;
            }
            cout << max << endl;
        }
    }
    return 0;
}