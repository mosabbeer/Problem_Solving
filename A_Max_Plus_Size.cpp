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
        int count = 0, count1 = 0, max = -1, max1 = -1, i, p;
        for (i = 1; i <= n; i++)
        {
            cin >> p;
            if (i % 2 != 0)
            {
                count1++;
                if (p > max1)
                    max1 = p;
            }
            else
            {
                count++;
                if (p > max)
                    max = p;
            }
        }
        if (max1 + count1 > max + count)
            cout << max1 + count1 << endl;
        else
            cout << max + count << endl;
    }
    return 0;
}