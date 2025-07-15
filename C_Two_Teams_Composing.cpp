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
        int a[200010] = {0}, i, count = 0, max = 0, p;
        for (i = 0; i < n; i++)
        {
            cin >> p;
            a[p]++;
        }
        if (n == 1)
            cout << "0\n";
        else
        {
            for (i = 0; i <= 200000; i++)
            {
                if (a[i] > max)
                {
                    max = a[i];
                }
                if (a[i] != 0)
                    count++;
            }
            count--;
            if (count >= max)
                cout << max << endl;
            else
            {
                max--;
                count++;
                if (max < count)
                    count = max;
                cout << count << endl;
            }
        }
    }
    return 0;
}