#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int n;
    cin >> n;
    ll a[n + 1], i, sum = 0, max = -5, sum2 = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
        if (a[i] > max)
            max = a[i];
    }
    sum2 = sum - max;
    if (sum % 2 == 0 && sum2 >= max)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}