#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, sum, mod = 0, cell = 0, p = 0;
        cin >> x >> y;
        sum = y / 2;
        mod = y % 2;

        cell = sum * 7 + mod * 11;
        if (mod != 0)
            sum++;
        if (x > cell)
        {
            x = x - cell;
            mod = x % 15;
            if (mod != 0)
                p++;
            p = p + x / 15;
        }
        cout << sum + p << endl;
    }
    return 0;
}