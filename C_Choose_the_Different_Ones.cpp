#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, i;
        cin >> n >> m >> k;
        int a[k + 1] = {0}, count1 = 0, count2 = 0, p;
        for (i = 0; i < n; i++)
        {
            cin >> p;
            if (p <= k && a[p] == 0)
            {
                a[p]++;
                count1++;
            }
        }

        for (i = 0; i < m; i++)
        {
            cin >> p;
            if (p <= k && a[p] < 2)
            {
                a[p]=a[p]+10;
                count2++;
            }
        }
        p = 1;
        for (i = 1; i <= k; i++)
        {
            if (a[i] == 0)
            {
                p = 0;
                break;
            }
        }
        if (p == 0)
        {
            cout << "NO\n";
        }
        else
        {
            if (count2 >= k/2 && count1 >= k / 2)
                cout << "YES\n";
            else
                cout << "NO\n";
               // cout<<count1<<" "<<count2<<endl;
        }
    }
    return 0;
}