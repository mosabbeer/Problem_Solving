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
        int a[n + 1], i, p = 0, f = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] != 0 && p==0)
            {
                f++;
                p = 1;
            }
            if (a[i] == 0)
                p = 0;
        }
        if (f > 2)
            cout << "2\n";
        else
            cout << f << endl;
    }
    return 0;
}