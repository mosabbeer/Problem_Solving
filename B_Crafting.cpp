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
        ll sum1 = 0, sum2 = 0, p, i, a[n + 1], b[n + 1], count = 0, min1 = 1000000000, min2 = -1;
        for (i = 0; i < n; i++)
        {
            cin >> p;
            sum1 = sum1 + p;
            a[i] = p;
        }
        for (i = 0; i < n; i++)
        {
            cin >> p;
            sum2 = sum2 + p;
            b[i] = p;
            if (b[i] > a[i])
            {
                count++;
                min2 = b[i] - a[i];
            }
            else
            {
                min1 = min(min1, a[i] - b[i]);
            }
        }
        if (n == 2)
        {
            if (sum1 >= sum2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else if (count >= 2)
        {
            cout << "NO\n";
        }
        else
        {
            if (min2 <= min1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}