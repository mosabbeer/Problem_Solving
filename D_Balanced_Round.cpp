#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, k;
        cin >> n >> k;
        ll a[n + 1], p, max = 1, count = 1;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] + k >= a[i + 1])
            {
                count++;
                if (count > max)
                    max = count;
            }
            else
            {
                count = 1;
            }
        }
        if(n==1)
        max=1;
        cout << n - max<< endl;
    }
    return 0;
}