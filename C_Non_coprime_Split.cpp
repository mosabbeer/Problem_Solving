#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[10000001] = {0};
int main()
{
    int i, j;
    for (i = 2; i * i <= 10000000; i++)
    {
        if (a[i] == 0)
        {
            for (j = i * i; j <= 10000000; j = j + i)
            {
                if (j <= 10000000)
                    a[j] = 1;
                else
                    break;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int l, m;
        cin >> l >> m;
        if (l != m)
        {
            for (i = m; i >= l; i--)
            {
                if (i % 2 == 0)
                    break;
            }
        }
        else
            i = l;
        if (a[i] == 0)
            cout << "-1\n";
        else if (i % 2 == 0)
            cout << i / 2 << " " << i / 2 << endl;

        else
        {

            for (i = 3; i < m; i++)
            {
                l = m - i;
                if (l % i == 0)
                    break;
            }
            cout << l << " " << i<<endl;
        }
        
    }
    return 0;
}