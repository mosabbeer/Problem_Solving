#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, count = 0, p = 0, i,q;
        cin >> n >> k;
        if (k == 1)
            cout << n << endl;
        else
        {
            while (n!=0)
            {
                i = 0;
                p = 0;
                q=0;
                while (p <= n)
                {
                    q=p;
                    p = pow(k, i) + .0001;
                    i++;
                }
                i=0;
                count = count + n / q;
                n = n % q;
                
            }
            cout << count << endl;
        }
    }
    return 0;
}