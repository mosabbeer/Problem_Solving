#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0, a[n + 1], i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
                sum = sum - a[i];
            else
                sum = sum + a[i];
            if (a[i] == 0 && i != 0 && i < n - 1)
                a[i] = -1;
        }
        int count = 0;
        for (i = 1; i < n; i++)
        {
            if (a[i] < 0 && a[i - 1] >= 0)
                count++;
        }
        if (a[0] < 0)
            count++;
        cout << sum << " " << count << endl;
    }
    return 0;
}