#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int i, p = 0, n, l, s;
        n = str.length();
        int a[n + 1], b[n + 1], c[n + 1], x=0, d = 1;
        for (i = 0; i < n; i++)
        {
            a[i] = str[i] - 48;
        }
        p = 0;
        if (a[n - 1] % 2 == 0)
        {
            for (i = n - 1; i >= 0; i--)
            {
                x = a[i] * d + x;
                d = d * 10;
            }
            cout << x / 2 << " " << x / 2 << endl;
        }
        else
        {
            for (i = n - 1; i >= 0; i--)
            {
                if (a[i] % 2 == 0)
                {
                    c[i] = b[i] = a[i] / 2;
                }
                else
                {
                    if (p == 0)
                    {
                        b[i] = a[i] / 2 + 1;
                        c[i] = a[i] / 2;
                        p = 1;
                    }
                    else
                    {
                        b[i] = a[i] / 2;
                        c[i] = a[i] / 2 + 1;
                        p = 0;
                    }
                }
            }
            if (n == 1)
            {
                cout << c[0] << " " << b[0];
            }
            else
            {
                for (i = 0; i < n; i++)
                {
                    if (b[i] != 0)
                        break;
                }
                p = i;
                for (i = p; i < n; i++)
                {
                    cout << b[i];
                }
                cout << " ";
                for (i = 0; i < n; i++)
                {
                    if (c[i] != 0)
                        break;
                }
                p = i;
                for (i = p; i < n; i++)
                {
                    cout << c[i];
                }
            }
            cout << endl;
        }
    }
    return 0;
}