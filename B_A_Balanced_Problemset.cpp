#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i, sum, max = 0, p, mod = 0, s=0,l;
        cin >> n >> k;
        if (n == k)
            cout << "1\n";
        else if (n % 2 == 0 && k == 2)
            cout << n / 2 << endl;
        else
        {
            p = n / (k - 1);
            if(k==2)
            p--;
            for (i = p; i >= 1; i--)
            {
                mod = n % (i * (k - 1));
                l = n / (i * (k - 1));
                if(mod==0)
                continue;
                if (mod % (i*l) == 0 && mod != 0)
                    s = i*l;
                else if ((i*l) % mod == 0 && mod != 0)
                    s = mod;
                if (s > max)
                    max = s;
            }
            cout << max << endl;
        }
    }
    return 0;
}