#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, i, k, sum = 0, d;
        cin >> n >> k;
        ll a[n * k+10];
        for (i = 1; i <= n*k; i++)
        {
            cin >> a[i];
            if (i % 2 != 0)
                sum = sum + a[i];
        }
        // cout << sum << endl;
        if (n == 2)
            cout << sum;
        else
        {
            d = n-1;
            sum = 0;
            for (i = k; i<n*k; i = i+d)
                sum = sum + a[i+(n-1)/2];
            cout << sum;
        }
        cout << endl;
    }
    return 0;
}