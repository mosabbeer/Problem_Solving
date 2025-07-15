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
        int a[n + 1], b[n + 1], i, p = 0, q = 0, l = 1, s = 1;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        if (a[0] != b[0])
        {
            cout << "NO\n";
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                if (a[i] > b[i] && p == 0)
                {
                    p = i;
                }
                else if (a[i] < b[i] && q == 0)
                {
                    q = i;
                }
                if (p != 0 && q != 0)
                    break;
            }
            for (i = p - 1; i >= 0; i--)
            {
                if (a[i] == -1)
                {
                    l = 1;
                    break;
                }
                else
                    l = 0;
            }
            for (i = q - 1; i >= 0; i--)
            {
                if (a[i] == 1)
                {
                    s = 1;
                    break;
                }
                else
                    s = 0;
            }
            if (l == 1 && s == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}