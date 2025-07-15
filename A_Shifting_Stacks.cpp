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
        ll a[n + 1], i, sum = 0, d = 0;
        cin >> a[0];
        sum = a[0];
        for (i = 1; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
            if (sum < i)
                d++;
            sum = sum - i;
        }
        if (d == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}