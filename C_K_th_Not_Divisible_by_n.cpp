#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, p, q = 0,  s = 0;
        cin >> n >> x;
        q=x/n;
        x=x+q;
        s=x/n;
        while (1)
        {
            p = (s - q);
            q = x / n;
            x = x + p;
            s = x / n;
            if (p <= 1 && x%n!=0)
                break;
        }
        cout << x << endl;
    }
    return 0;
}