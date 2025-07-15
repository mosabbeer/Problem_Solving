#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, i, sum = 0, a[100000];
        cin >> n;
        sum = n;
        if (n % 3 == 1 || n%3==0)
        {
            for (i = 1; i <= n; i++)
            {
                if (i % 2 != 0)
                {
                    a[i] = 1;
                     sum--;
                }
                else
                {
                    a[i] = 2;
                    sum = sum - 2;
                }
                if (sum == 0)
                    break;
            }
        }
        else
        {
            for (i = 1; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    a[i] = 1;
                     sum--;
                }
                else
                {
                    a[i] = 2;
                    sum = sum - 2;
                }
                if (sum == 0)
                    break;
            }
        }
        sum = i;
        for (i = sum; i >0; i--)
            cout << a[i];
        cout << endl;
    }
    return 0;
}