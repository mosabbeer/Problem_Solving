#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k, l, p;
    cin >> n >> k;
    ll a[n + 3], i;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
  
    if (k == 1 || k == 2)
        cout << a[1];
    else
    {
        p = sqrt(k)-1;
        for (i = p; i < k; i++)
        {
            l = i * (i + 1) / 2;
            if (l > k)
                break;
        }
        p = i;
        if ((p * (p + 1) / 2) > k)
            p--;
        if ((p * (p + 1) / 2) > k)
            p--;
        if ((p * (p + 1) / 2) > k)
            p--;
        l = p * (p + 1) / 2;
        l = k % l;
        if (l == 0)
            cout << a[p ];
        else
            cout << a[l];
    }
    return 0;
}