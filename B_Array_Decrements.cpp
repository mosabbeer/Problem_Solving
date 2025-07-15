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
        int a[n + 1], b[n + 1], c[n + 1], i, p = 0, q = 0, max = -2, r;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        if (n == 1 && a[0] >= b[0])
        {
            cout << "YES\n";
        }
        else if (n == 1 && a[0] < b[0])
        {
            cout << "NO\n";
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                if (b[i] != 0)
                {
                    c[p] = a[i] - b[i];
                    p++;
                }
                else
                {
                    r = a[i] - b[i];
                    if (r > max)
                        max = r;
                }
            }
            if (p <= 1 && c[0] > max)
                cout << "YES\n";
            else if (p <= 1 && c[0] < max)
                cout << "NO\n";
            else
            {
                sort(c,c+p);
                for (i = 1; i < p; i++)
                {
                    if (c[i] != c[i - 1] || c[i - 1] < max)
                    {
                        q = 1;
                        break;
                    }
                }
                if (q == 1)
                    cout << "NO\n";
                else
                    cout << "YES\n";
            }
        }
    }
    return 0;
}