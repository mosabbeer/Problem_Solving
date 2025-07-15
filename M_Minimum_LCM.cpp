#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, p, i, d, count = 0;
        cin >> n;
        if (n % 2 == 0)
            cout << n / 2 << " " << n / 2;
        else
        {
            for (i = 3; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                    count++;
                if (count > 0)
                    break;
            }
            if (count == 0)
                cout << "1 " << n - 1;
            else
            {
                for (i = n / 2; i >= 1; i--)
                {
                    p = n - i;
                    if (p % i == 0)
                        break;
                }
                cout << i << " " << p;
            }
        }
        cout << endl;
    }
    return 0;
}