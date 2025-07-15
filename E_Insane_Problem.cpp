#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        ll a[50] = {0}, ans = 0, i = 0, p1, p2, s;
        a[1] = 1;
        for (i = 2; i <= 33; i++)
        {
            a[i] = k * a[i - 1];
            if (a[i] > r2)
                break;
        }
        for (i = 1; i <= 33; i++)
        {
            if (a[i] == 0)
                break;
           p1 = l2 / a[i];
            p2 = r2 / a[i];
            if (l2 % a[i] != 0)
                p1++;
           /* if (r2 % a[i] != 0)
                p2++;*/
            s =min(r1, p2)-max(l1, p1) + 1;
            if ((s > (r1 - l1 + 1))||s<0)
                s = 0;
            ans = ans + s;    
        }
        cout << ans << endl;
    }
    return 0;
}