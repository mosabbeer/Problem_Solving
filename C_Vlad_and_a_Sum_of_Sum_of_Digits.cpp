#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a[200001] = {0}, i, p, sum = 0;
    for (i = 1; i <= 200000; i++)
    {
        p = i;
        while (p > 0)
        {
            sum = sum + p % 10;
            p = p / 10;
        }

        a[i] = sum;
    }
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}