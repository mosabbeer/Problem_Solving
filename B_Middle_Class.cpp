#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        ll a[n + 1], sum = 0, count = 0, no = 0;
        int i;
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        reverse(a, a + n);
        for (i = 0; i < n; i++)
        {
            sum = sum + a[i];
            no++;
            if (sum / (no * 1.0) >= x)
                count++;
            else
                break;
        }

        cout << count << endl;
    }
    return 0;
}