#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, i;
        cin >> n;
        if (n % 2 != 0)
            p = n / 2 + 1;
        else
            p = n / 2;
        cout << p << endl;
        int a = 1, b = 3 * n;
        while (b > a)
        {
            cout << a << " " << b << "\n";
            a = a + 3;
            b = b - 3;
        }
    }
    return 0;
}