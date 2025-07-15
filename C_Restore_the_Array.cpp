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
        ll a[n], i, min = 99999999999, p, count = 0;
        for (i = 1; i < n; i++)
        {
            cin >> a[i];
            {
                if (a[i] < min)
                {
                    min = a[i];
                    p = i;
                }
            }
        }
        for (i = 1; i < n; i++)
        {
            if (min == a[i])
                count++;
        }
        for (i = 1; i < p; i++)
        {
            if (count > 1)
            {
                if (a[i] == a[i + 1] && a[i] > a[i + 2] && i < n - 2)
                {
                    a[i + 1] = a[i + 2];
                }
            }
            cout << a[i] << " ";
        }
        cout << "0 ";
        for (i = p; i < n; i++)
        {
            if (count > 1)
            {
                if (a[i] == a[i + 1] && a[i] > a[i + 2] && i < n - 2)
                {
                    a[i + 1] = a[i + 2];
                }
            }
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}