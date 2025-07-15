#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    ll i, x, min = 999999999999;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        if (x < 0)
            x = -1 * x;
        if (x < min)
            min = x;
    }
    cout << min;
    return 0;
}