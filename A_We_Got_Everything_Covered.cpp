#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, d = 97, i;
        cin >> n >> k;
        while (n--)
        {
            for (i = 0; i < k; i++)
            {
                cout << char(d + i);
            }
        }

        cout << endl;
    }
    return 0;
}