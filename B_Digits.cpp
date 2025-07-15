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
        int a[10] = {0};
        a[1] = 1;
        if (n >= 3 || k % 3 == 0)
            a[3] = 1;
        if (k == 5)
            a[5] = 1;
        if (n >= 6 || k == 9 || (k % 3 == 0 && n >= 3))
            a[9] = 1;
        if (k == 7 || n >= 3)
            a[7] = 1;
        for (int i = 1; i <= 9; i++)
        {
            if (a[i] == 1)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}