#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    if (n == 2)
        cout << "NO";
    else if (n % 2)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}