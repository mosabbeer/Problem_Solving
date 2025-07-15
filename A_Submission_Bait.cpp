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
        int a[100] = {0}, i, p, count = 1;
        for (i = 0; i < n; i++)
        {
            cin >> p;
            a[p]++;
        }
        for (i = 1; i < 55; i++)
        {
            if (a[i] % 2 != 0)
            {
                count = 0;
                break;
            }
        }
        if (count % 2 != 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}