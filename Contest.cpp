#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r, a, b, c; cin >> l >> r;
        a = l, b = r;
        for (ll i = 0; i <= 30; i++) {
            if (((a & (1LL << i)) && (b & (1LL << i)))) {
                ll tem = b ^ (1LL << i);
                if (l <= tem && tem <= r) {
                    b = tem;
                }
            }
        }
        
        for (ll i = 30; i >= 0; i--) {
            if (((a & (1LL << i)) == false && (b & (1LL << i))) == false) {
                ll tem = a | (1LL << i);
                if (l <= tem && tem <= r) {
                    a = tem;
                }
            }
        }
        cerr << a << endl;
        for (int i = l; i < l + 3; i++){
            if (i != a && i != b) c = i;
        }

        cout << a << ' ' << b << ' ' << c << endl;
    }
    return 0;
}
