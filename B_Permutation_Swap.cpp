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
        int a[n + 2], i, ans = 0;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
            ans = __gcd(ans, abs(i - a[i]));
        }
        cout << ans << endl;
    }
    return 0;
}