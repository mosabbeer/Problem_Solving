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
        int a[n + 2], i, c0 = 0, count = 0, j = 0,count1=0;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                c0++;
        }
        if (c0 == 0)
            cout << "1\n";
        else
        {
            a[n+1] =a[0]= 0;
            for (i = n ; i >= 0; i--)
            {
                if (a[i] == 0 && a[i + 1] != 0)
                    count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}