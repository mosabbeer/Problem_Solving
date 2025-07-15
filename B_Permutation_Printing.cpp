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
        ll a[n + 1], i;
        int p, q;
        p = 1;
        if (n % 2 == 0)
            q = n;
        else
            q = n - 1;
        if (n % 2 == 0)
        {
            for (i = 0; i < n; i++)
            {
                if (i % 2 == 0 && q > 0)
                {
                    a[i] = q;
                    q = q - 2;
                }
                else if (i % 2 != 0 && p <= n)
                {
                    a[i] = p;
                    p = p + 2;
                }
            }
        }
        else
        {
            for (i = 0; i < n-1; i++)
            {
                if (i % 2 == 0 && q > 0)
                {
                    a[i] = q;
                    q = q - 2;
                }
                else if (i % 2 != 0 && p <= n)
                {
                    a[i] = p;
                    p = p + 2;
                }
            }
            a[n-1]=n;
        }
        for (i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}