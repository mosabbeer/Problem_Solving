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
        ll a[n], sum = 0, max = 0, i;
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (i = 0; i < n - 1; i++)
        {
            while (a[i] % 2 == 0)
            {
                a[i] = a[i] / 2;
                a[n - 1] = a[n - 1] * 2;
            }
        }
        for (i = 0; i < n; i++)
            max = max + a[i];
        sort(a, a + n);
        while (a[n - 1] % 2 == 0)
        {
            a[n - 1] = a[n - 1] / 2;
            a[n - 2] = a[n - 2] * 2;
        }
        for (i = 0; i < n; i++)
            sum = sum + a[i];
        if (sum > max)
            max = sum;
        cout << max << endl;
    }
    return 0;
}