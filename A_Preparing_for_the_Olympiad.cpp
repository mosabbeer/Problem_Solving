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
        int a[n + 1], b[n + 1], i;
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
            cin >> b[i];
        ll sum = a[n - 1];
        for (i = 0; i < n - 1; i++)
        {
            int p = a[i] - b[i + 1];
            if (p > 0)
                sum = sum + p;
        }
        cout << sum << endl;
    }
    return 0;
}