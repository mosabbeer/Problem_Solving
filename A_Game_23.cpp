#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m, count = 0, div;
    cin >> n >> m;
    if (m % n != 0)
        cout << "-1";
    else
    {
        div = m / n;
        while (div > 1)
        {
            if (div % 3 == 0)
                div = div / 3;
            else
                div = div / 2;
            count++;
        }
        cout << count;
    }
    return 0;
}