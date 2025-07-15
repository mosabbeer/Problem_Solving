#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, max = 0, min = 0, mod, div, formin = 0;
    cin >> n;
    mod = n % 7;
    div = n / 7;
    max = div * 2;
    if (mod == 1)
        max = max + 1;
    else if (mod >= 2)
        max = max + 2;
    formin = div * 5;
    if (mod > 5)
        formin = formin + 5;
    else
        formin = formin + mod;
    min = n - formin;
    cout << min << " " << max;
    return 0;
}