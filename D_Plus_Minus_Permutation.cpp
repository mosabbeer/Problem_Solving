#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b, na, nb, nc = 0, suma = 0, sumb = 0, i, q,s=0;
        cin >> n >> a >> b;
        ll lcm, p = 0;
        if (a == b)
            cout << "0\n";
        else
        {
           /*if (a > b)
            {
                lcm = a;
            }
            else
            {
                lcm = b;
            }
            i = 2;
            q = lcm;
            while (1)
            {
                if (lcm % a == 0 && lcm % b == 0)
                    break;
                else
                {
                    lcm = q * i;
                    i++;
                }
                if (lcm > n)
                {
                    p = 1;
                    break;
                }
            }*/
            s=__gcd(a,b);
            lcm=a*b/s;
                nc = n / lcm;
            na = n / a - nc;
            nb = n / b - nc;
            suma = (n * (n + 1)) / 2 - (((n - na) * (n - na + 1)) / 2);
            sumb = nb * (nb + 1) / 2;
            cout << suma - sumb << endl;
        }
    }

    return 0;
}