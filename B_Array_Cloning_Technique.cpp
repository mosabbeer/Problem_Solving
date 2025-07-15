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
        ll a[n + 1], i, max = 0, count = 1;
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
                count++;
            if (count > max)
                max = count;
            if (a[i] != a[i - 1])
            {
                count = 1;
            }
        }
        if (max == n || max == 1)
            cout << "0\n";
        else
        {
            count = 0;
            while ((2 * max) < n)
            {
                count = count + 2 * max - max + 1;
                max = 2 * max;
            }
            cout << count << endl;
        }
    }
    return 0;
}