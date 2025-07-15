#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    ll sum = 0, p = 0, i, a[n + 1], q = n - 1;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 == 0)
    {
        q = n - 1;
        sort(a, a + n);
        for (i = 0; i < n; i++)
        {
            if (a[i] < a[q])
            {
                a[q] = a[q] - a[i];
                a[i] = 0;
            }
            else
            {
                a[i] = a[i] - a[q];
                a[q] = 0;
            }
            if (a[q] == 0 && q>0)
                q--;
          /* */
        }
         for (i = 0; i < n; i++)
            {
                if (a[i] == 0)
                    p++;
               // cout << a[i] << " ";
            }
           // cout << " " << q;
        if (p == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else
        cout << "NO";
    return 0;
}