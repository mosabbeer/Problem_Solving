#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, n;
        cin >> A >> B >> n;
        ll a[n + 1], b[n + 1], i, sum = 0, p, D = 0;
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b, b + n);
        for (i = 0; i < n; i++)
        {
            if (b[i] % A == 0)
                p = b[i] / A;
            else
                p = b[i] / A + 1;
            B = B - p * a[i];
            if (B <= 0)
            {
                D = 1;
                if (B + a[i] > 0)
                {
                    D = 0;
                    break;
                }
                break;
            }
        }
        if (D == 0)
            cout << "YES\n";
     
       // else if (D == 1 && i == n - 1)
         //   cout << "YES\n";
        else
            cout << "NO\n";
        // cout<<B+a[i]<<" "<<D<<endl;
    }
    return 0;
}