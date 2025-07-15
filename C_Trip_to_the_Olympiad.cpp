#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, p, i = 30, l = 0;
        p = pow(2, i) + .0001;
        cin >> n >> m;
        if (m - n < 3)
            cout << n << " " << n + 1 << " " << n + 2 << endl;
        else
        {
            while (p > n)
            {

                p = pow(2, i) + .0001;
                if (p-2 > n && p <= m)
                {
                    l = 1;
                    break;
                }
                i--;
            }
            if (l == 1)
                cout << p << " " << p - 1 << " " << p - 2 << endl;
            else
            {
                int x=(m-n)/2+n;
                if((m-n)%2!=0)
                x++;
                int y=(x - n) / 2 + n;
                if((x-n)%2!=0)
                y++;
                cout << m << " " << x << " " << n << endl;
            }
        }
    }
    return 0;
}