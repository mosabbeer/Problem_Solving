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
        int a[n + 1] = {0}, b[n + 1] = {0}, i, p, c[n + 1] = {0}, d[n + 1] = {0}, s;
        for (i = 1; i <= 2 * n; i++)
        {
            cin >> p;
            if (i <= n)
                a[p]++;
            else
            {
                b[p]++;
            }
        }
        i = 1;
        p = 0;
        int j = 1, l = 1;
        for (i = 1; i <= n; i++)
        {
            if (a[i] == 2)
            {
                c[j] = i;
                c[j + 1] = i;
                j = j + 2;
                p++;
            }
            if (2 * k - 2 * p < 2)
                break;
        }
        l = 2 * k - 2 * p;
        s = l;
        if (l > 0)
        {
            for (i = 1; i <= n; i++)
            {
                if (a[i] == 1)
                {
                    c[j] = i;
                    l--;
                    j++;
                }
                if (l == 0)
                    break;
            }
        }
        i = 1;
        j = 1;
        if (p != 0)
        {
            for (i = 1; i <= n; i++)
            {
                if (p == 0)
                    break;
                if (b[i] == 2)
                {
                    d[j] = i;
                    d[j + 1] = i;
                    p--;
                    j = j + 2;
                }
            }
        }
        if (s > 0)
        {
            for (i = 1; i <= n; i++)
            {
                if (b[i] == 1)
                {
                    d[j] = i;
                    j++;
                    s--;
                }
                if (s == 0)
                    break;
            }
        }
        for (i = 1; i <= 2 * k; i++)
            cout << c[i] << " ";
        cout << endl;
        for (i = 1; i <= 2 * k; i++)
            cout << d[i] << " ";
        cout << endl;
    }
    return 0;
}