#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int a[n + 1], i, max = 0, count = 1, b[n + 1] = {0}, p = 0, q, r;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
            q = count;
        }
        else
            count = 1;
        if (p != 0 && count==1)
        {
            if (p >= q)
                r = 2 * q;
            else
                r = 2 * p;
                    p = q;
        }
    
        if (r > max)
            max = r;
    }
    cout << max;
    return 0;
}