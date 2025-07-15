#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b, c;
        cin >> n >> a >> b;
        if (a == b && b == 0)
        {
            if (n == 1)
                cout << "0\n";
            else
                cout << "-1\n";
        }
        else
        {
            if (c > n)
                cout << n << endl;
            else if (c == n)
                cout << n - 1 << endl;
            else if (c == 0)
                cout << n - n / b << endl;
            else if (b == 0)
                cout << n - n / c << endl;
            else
            {
                int p = n % b;
                if (p >= c)
                    p = 1;
                else
                    p = 0;
                cout << n / b + p << endl;
            }
        }
    }
    return 0;
}