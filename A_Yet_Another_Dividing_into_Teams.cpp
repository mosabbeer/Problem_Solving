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
        int a[n + 1], i, s = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] == 1)
            {
                s++;
                break;
            }
        }
        cout << s + 1 << endl;
    }
    return 0;
}