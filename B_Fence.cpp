#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, k;
    cin >> n >> k;
    ll a[n + 1], b[n + 1], sum = 0, min = 34952309534832, p, i, q;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
        b[i] = sum;
    }
    b[0] = 0;
    for (i = 0; i <= n - k; i++)
    {
        p = b[k + i] - b[i];
        if (p < min)
        {
            min = p;
            q = i;
        }
    }
    for (i = n; i >= k; i--)
    {
        p = b[i] - b[i - k];
        if (p <= min)
        {
            min = p;
            q = i - k + 1;
        }
    }
    cout << q;
    return 0;
}