#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[30], i, c = 0, n = 3;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        if (a[1] % a[0] != 0 || a[2] % a[0] != 0)
            c = 1;
            //cout<<c<<endl;
        if (c ==1)
            cout << "NO\n";
        else
        {
            c = a[1] / a[0] + a[2] / a[0] - 2;
            if (c <= 3)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}