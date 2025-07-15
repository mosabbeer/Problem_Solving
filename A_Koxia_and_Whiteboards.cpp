#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;
        ll a[n + 1], b[n + 1], sum = 0, sumb = 0, i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < m; i++)
        {
            cin >> b[i];
            sumb = sumb + b[i];
        }
        if (n == m)
            cout << sumb << endl;
        else if (n > m)
        {
            for (i = m; i < n; i++)
                sumb = sumb + a[i];
            cout << sumb << endl;
        }
        else
        {
            i = m - 1;
            while (n--)
            {
                sum = sum + b[i];
                i--;
            }
            cout << sum << endl;
        }
    }
    return 0;
}