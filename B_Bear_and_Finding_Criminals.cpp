#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1], i, count = 0;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    if (a[k] == 1)
        count++;
        a[k]=0;
    for (i = 1; i <= n; i++)
    {
        if (k - i > 0 && k + i <= n)
        {
            if (a[k - i] == a[k + i] && a[k - i] == 1)
                count = count + 2;
            a[k - i] = a[k + i] = 0;
        }
        else
            break;
    }
    for (i = 1; i <= n; i++)
    {
        if (a[i] == 1)
            count++;
    }
    cout << count;
    return 0;
}