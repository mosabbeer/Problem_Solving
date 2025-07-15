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
        ll a[n + 1], i, p = 0, b[n + 1] = {0}, count = 0, max = -1;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }
        for (i = n; i > 1; i--)
        {
            if (a[i] < a[i - 1])
            {
                p = a[i - 1];
                break;
            }
        }
        for (i = p; i >= 1; i--)
        {
            if (a[i] > max)
                max = a[i];
        }
        for (i = max; i >= 1; i--)
        {
            if (b[i] > 0)
                count++;
        }
        if (count != 0)
        {
            if (b[a[n]] == 1)
                count--;
        }
        cout << count << endl;
    }
    return 0;
}