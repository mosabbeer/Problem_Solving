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
        int a[n + 1], b[n + 1], i, count = 0, value, sum = 0, p = 0, ex = 0;
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
            if (p == 0)
            {
                if (b[i] != -1)
                {
                    sum = a[i] + b[i];
                         p=1;
                }
           
                // cout<<sum<<endl;
            }
            if (b[i] != -1)
            {
                value = a[i] + b[i];
            }
            if (sum != value)
                ex = 1;
        }
        p = 0;
        if (ex == 1)
            cout << "0\n";
        else
        {
            for (i = 0; i < n; i++)
            {
                if (b[i] == -1)
                {
                    p = k - a[i];
                    if (p > -1 && p <= k)
                        count++;
                    else
                    {
                        ex = 1;
                        break;
                    }
                }
            }
            if (ex == 1)
                cout << "0\n";
            else
                cout << count << endl;
        }
        cout << sum << value << endl;
    }
    return 0;
}