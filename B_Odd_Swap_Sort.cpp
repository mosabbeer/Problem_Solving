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
        int a[n + 1], b[n + 1], i, j = 0, k = 0, p, l = 0;
        for (i = 0; i < n; i++)
        {
            cin >> p;
            if (p % 2 == 0)
            {
                a[j] = p;
                j++;
            }
            else
            {
                b[k] = p;
                k++;
            }
        }
        if (j > 1)
        {
            for (i = 1; i < j; i++)
            {
                if (a[i] < a[i - 1])
                {
                    l = 1;
                    break;
                }
            }
        }
        if (l == 0)
        {
            if (k > 1)
            {
                for (i = 1; i < k; i++)
                {
                    if (b[i] < b[i - 1])
                    {
                        l = 1;
                        break;
                    }
                }
            }
        }
        if(l==0)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}