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
        if (n == 1)
            cout << "0\n";
        else if (n <= k)
            cout << "1\n";
        else
        {
            int p, q, mod;
            p = n / k;
            if (p <= k)
            {
                mod = n % k;
                if (mod != 0)
                {
                    if (n / k < k)
                        cout << n / k + 1 << endl;
                    else
                        cout << n / k + 2 << endl;
                }
                else
                    cout << n / k + 1 << endl;
            }
            else
            {
                
            }
        }
    }
    return 0;
}