#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1], i, count = 0;
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
        {
            if (a[i] == 1)
                count++;
            else
                break;
        }
        if (count == n)
        {
            if (count % 2 != 0)
                cout << "First\n";
            else
                cout << "Second\n";
        }
        else
        {
            if (count % 2 == 0)
                cout << "First\n";
            else
                cout << "Second\n";
        }
    }
    return 0;
}