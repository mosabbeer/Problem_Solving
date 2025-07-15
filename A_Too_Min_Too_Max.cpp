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
        int a[n + 1], i, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        s1 = a[0] - a[n - 1];
        s2 = a[n - 1] - a[1];
        s3 = a[1] - a[n - 2];
        s4 = a[n - 2] - a[0];
        if (s1 < 0)
            s1 = -1 * s1;
        if (s2 < 0)
            s2 = -1 * s2;
        if (s3 < 0)
            s3 = -1 * s3;
        if (s4 < 0)
            s4 = -1 * s4;
        cout << s1 + s2 + s3 + s4 << endl;
    }
    return 0;
}