#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m;
    cin >> n >> m;
    if (m > 1)
        m--;
    else if (m == 1)
        n--;
    cout << n * m;
    return 0;
}