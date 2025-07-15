#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        ll a[n + 1] = {0}, p, i, count = 0, l, r, k;
        for (i = 1; i <= n; i++)
        {
            cin >> p;
            if (p % 2 != 0)
                count++;
            a[i] = count;
        }
        while (s--)
        {
            cin >> l >> r >> k;
            p = a[n] - (a[r] - a[l-1]);
            if (k % 2 != 0)
                p = p + (r-l+1);
              //  cout<<p<<endl;
            if (p % 2 != 0)
                cout << "YES\n";
            else
                cout << "NO\n";
            p = 0;
            
        }
       /* for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
        cout<<endl;*/
    }
    return 0;
}