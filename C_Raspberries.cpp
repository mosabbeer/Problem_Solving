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
        int a[n + 1], p, q, s = 0, b[n + 1], count = 0, count1 = 0, c = 0, l = 0;
        for (i = 0; i < n; i++)
        {
            cin >> p;
            b[i] = p % k;
            if (p % k == 0)
            {
                a[i] = 0;
                l++;
            }
            else
            {
                if (p <= k)
                {
                    a[i] = k - p;
                }
                else
                {
                    q = p % k;
                    a[i] = k - q;
                }
            }
        }
        if (l > 0)
            cout << "0\n";
        else
        {
            sort(a, a + n);
            if (k != 4)
                cout << a[0] << endl;
            else
            {
                for (i = 0; i < n; i++)
                {
                    if (b[i] == 2)
                        count++;
                    else if (b[i] == 1)
                        count1++;
                    else if (b[i] == 3)
                        c++;
                    if (count == 2)
                        break;
                }
                if (count == 2)
                {
                    cout << "0\n";
                }
                else if (count == 1 && count1 > 0)
                    cout << "1\n";
                else if (count1 >= 2 && c == 0)
                    cout << "2\n";
                else
                {
                    cout << a[0] << endl;
                }
            }
        }
    }
    return 0;
}