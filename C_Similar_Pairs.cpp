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
        int a[n + 1], i, cO = 0, cE = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                cE++;
            else
                cO++;
        }
        if (cE % 2 == 0 && cO % 2 == 0)
            cout << "YES\n";
        else
        {
            sort(a, a + n);
            for (i = 1; i < n; i++)
            {
                if (a[i] - a[i - 1] == 1)
                {
                    a[i] = a[i - 1] = 0;
                }
            }
            cE = cO = 0;
            for (i = 0; i < n; i++)
            {

                if (a[i] % 2 == 0)
                    cE++;
                else
                    cO++;
            }
            if (cE % 2 == 0 && cO % 2 == 0)
            cout << "YES\n";
            else
            cout<<"NO\n";
        }
    }
    return 0;
}