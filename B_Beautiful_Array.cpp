#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, b, s, p, s2, q, count = 0;
        cin >> n >> k >> b >> s;
        if ((k * b) > s)
        {
            cout << "-1\n";
        }
        else
        {
            p = (k - 1) * (n - 1);
            s2 = s - p - k + 1;
            if (s2 > k * b)
            {
                cout << "-1\n";
            }
            else
            {
                q = k * b;
                if ((s - q) >= k)
                {
                    q = q + (k - 1);
                }
                else
                {
                    q = q + s % k;
                }
                cout << q << " ";
                s=s-q;
                for (int i = 1; i < n; i++)
                {
                    if (s == 0)
                    {
                        cout << "0 ";
                    }
                    else if (s >=  k)
                    {
                        cout << k - 1 << " ";
                        s = s - k + 1;
                    }
                    else
                    {
                        cout << s << " ";
                        s = 0;
                    }
                }
                cout << endl;
            }
        }
    }
    return 0;
}