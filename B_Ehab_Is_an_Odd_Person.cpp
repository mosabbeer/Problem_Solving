#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    ll a[n + 1], i, cO = 0, cE = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            cE++;
        else
            cO++;
    }
    if (cE != n && cO != n)
        sort(a, a + n);
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}