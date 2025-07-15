#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        ll a[n + 1], sum = 0, i, count = 0, l;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] % x != 0)
                sum = sum + x;
            else
            {
                l = a[i];
                while (a[i] % x == 0)
                {
                    count++;
                    a[i] = a[i] / x;
                }
                count++;
                sum = sum + l * count;
                count = 0;
            }
        }
        cout << sum << endl;
    }
    return 0;
}