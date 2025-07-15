#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k,p;
        cin >> n >> k;
        p=4*n-2;
        if (p== k)
            cout << (k + 2) / 2 << endl;
        else
        {
            if (k % 2 != 0)
                k++;
            cout << k / 2 << endl;
        }
    }
    return 0;
}