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
        int a[n + 1], i, count = 0, p, q;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                q = i;
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                p = i;
                break;
            }
        }
        if (p == q)
            cout << "0\n";
        else
        {
            for (i = p; i <= q; i++)
            {
                if (a[i] == 0)
                    count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}