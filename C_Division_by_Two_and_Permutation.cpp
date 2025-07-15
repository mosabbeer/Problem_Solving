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
        int a[n + 2], i, b[n + 2] = {0}, p = 0, j, x;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {

            if (a[i] <= n && b[a[i]] != 1)
            {
                b[a[i]] = 1;
            }
            else
            {
                for (j = 1; j <= 30; j++)
                {
                    x = pow(2, j);
                    if (a[i] / x <= n && b[a[i] / x] != 1)
                    {
                        b[a[i] / x] = 1;
                        break;
                    }
                }
            }
        }
        for (i = 1; i <= n; i++)
        {
            if (b[i] != 1)
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