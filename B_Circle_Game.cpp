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
        int a[n], i, count = 0;
        for (i = 1; i <= n; i++)
            cin >> a[i];
        i = 1;
        while (i<=n)
        {
            if (a[i]!= 0)
            {
                a[i] = 0;
                count++;
            }
            else
                break;
            if (a[i % n + 1]!= 0)
            {
                a[i % n + 1]= 0;
                count++;
            }
            else
                break;
            i++;
        }
        if (count % 2 != 0)
            cout << "Mike\n";
        else
            cout << "Joe\n";
    }
    return 0;
}