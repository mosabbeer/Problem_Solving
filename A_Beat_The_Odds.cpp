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
        ll a[n + 1], countOdd = 0, countEven = 0, i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                countEven++;
            else
                countOdd++;
        }
        if (countEven >= countOdd)
            cout << countOdd << endl;
        else
            cout << countEven << endl;
    }
    return 0;
}