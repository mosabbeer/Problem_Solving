#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum, a[100] = {0}, count = 0, max = 0;
        cin >> n >> sum;
        int b[n + 1], i;
        for (i = 1; i <= n; i++)
        {
            cin >> b[i];
            a[b[i]]++;
            if (b[i] > max)
                max = b[i];
        }
        for (i = 1; i <= 51; i++)
        {
            if (a[i] == 0)
            {
                sum = sum - i;
                a[i] = 1;
                if(i>max)
                max=i;
            }
            if (sum <= 0)
                break;
        }
        if (sum == 0)
        {
            for (int j = max; j >= 1; j--)
            {
                if (a[j] == 1)
                    count++;
            }
            if (count == max)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
       // cout << sum << endl;
    }
    return 0;
}