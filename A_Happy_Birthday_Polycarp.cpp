#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, p, count = 0, sum = 0, q, d, count1 = 0,l;
        cin >> n;
        p = n;
        if (n < 10)
            cout << n << endl;
        else
        {
            while (p > 9)
            {
                p = p / 10;
                count++;
            }
            sum = count * 9;
            q = n;
            while (q > 9)
            {
                d = q % 10;
                l=d;
                if (d >= p)
                    count1++;
                q = q / 10;
            }
            if (count1 == count || l>p)
                sum = sum + p;
            else
                sum = sum + p - 1;
            cout << sum << endl;
        }
    }
    return 0;
}