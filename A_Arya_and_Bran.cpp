#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1], p = 0, i;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i <= n; i++)
    {
            a[i] = a[i] + p;
        if (a[i] > 8)
        {
            p = a[i] - 8;
            k = k - 8;
        }
        else
        {
            p = 0;
            k = k - a[i];
        }
        if (k <= 0)
            break;
    }
   
    if (k > 0)
        cout << "-1";
    else
        cout << i;
    return 0;
}