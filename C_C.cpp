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
        int a[n + 1][n + 1], i, j;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - 1; j++)
            {
                if (a[i][j] < 0)
                {
                        a[i + 1][j + 1] = min(a[i+1][j+1],a[i][j]);
                }
            }
        }
        ll sum = 0;
        for (j = 0; j < n; j++)
        {
            if (a[n - 1][j] < 0)
                sum = sum - a[n - 1][j];
        }
        for (j = 0; j < n - 1; j++)
        {
            if (a[j][n - 1] < 0)
                sum = sum - a[j][n - 1];
        }
        cout << sum << endl;
    }
    return 0;
}