#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        ll sum = 0;
        if (m >= a)
            sum = sum + a;
        else
            sum = sum + m;
        if (m >= b)
            sum = sum + b;
        else
            sum = sum + m;
        m = 2 * m - sum;
        if (m >= c)
            sum = sum + c;
        else
            sum = sum + m;
        cout << sum << endl;
    }
    return 0;
}