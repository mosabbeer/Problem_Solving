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
        int a[n + 1], i, min, count = 0;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        min = a[n];
        if (n == 1)
            cout << "0\n";
        else
        {
            for (i = n - 1; i >= 1; i--)
            {
                if (a[i] > min)
                    count++;
                else
                    min = a[i];
            }
            cout << count << endl;
        }
    }
    return 0;
}