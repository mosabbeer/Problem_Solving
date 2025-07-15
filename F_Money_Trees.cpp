#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, i, k, sum = 0, max = -1000000000000, count = 0;
        cin >> n >> k;
        pair<int, int> p[n + 1];
        for (i = 0; i < n; i++)
        {
            cin >> p[i].second;
        }
        for (i = 0; i < n; i++)
        {
            cin >> p[i].first;
        }
        for (i = 1; i < n; i++)
        {
            sum = sum + a[i - 1];
            count = 1;
            if (sum > k)
            {
                count--;
                if (count > max)
                    max = count;
            }
            else
            {
                if (a[i - 1] % a[i])
                {
                    sum = sum + a[i - 1];
                    count ;
                    if (sum > k)
                    {
                        count--;
                        if (count > max)
                            max = count;
                    }
                }
            }
        }
    }
    return 0;
}