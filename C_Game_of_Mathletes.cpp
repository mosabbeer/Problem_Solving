#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        int n, k;
        cin >> n >> k;
        int a[n + 1];
        ll i, p, count = 0, l = 0, r = n - 1;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        while (l < r)
        {
            if (a[l] + a[r] < k)
                l++;
            else if (a[l] + a[r] > k)
                r--;
            else
            {
                count++;
                l++;
                r--;
            }
        }
        cout << count << endl;
    }
    return 0;
}