#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int a[n + 1], b[n + 2], c[n + 2], sum = 0, sum1 = 0, p = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
            b[i] = sum;
        }
        c[0] = a[0];
        sum1 = a[0];
        for (i = 1; i < n; i++)
        {
            if (sum1 >= a[i])
            {
                sum1 = sum1 - a[i];
            }
            else
                sum1 = sum1 + a[i];
            c[i] = sum1;
        }
        for (i = 0; i < n; i++)
        {
            if (c[i] != b[i])
            {
                p = 1;
                break;
            }
        }
        if (p == 1)
            cout << "-1" << endl;
        else
        {
            for (i = 0; i < n; i++)
                cout << b[i] << " ";
            cout << endl;
        }
    }
    return 0;
}