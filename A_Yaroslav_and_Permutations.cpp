#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int p, a[10000] = {0}, i, max = 0;
    for (i = 0; i < n; i++)
    {
        cin >> p;
        a[p]++;
    }
    p = 0;
    for (i = 0; i <= 1000; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    p = n - max;
    if (n == 1)
    {
        cout << "YES\n";
    }
    else if (max == n)
    {
        cout << "NO\n";
    }
    else
    {
        if (max - p > 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}