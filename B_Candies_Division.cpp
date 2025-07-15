#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int sum = 0, div = 0, mod = 0;
        mod = n % k;
        div = n / k;
        sum = sum + div * k;
        k = k / 2;
        if (mod > k)
            sum = sum + k;
        else
            sum = sum + mod;
        cout << sum << endl;
    }
    return 0;
}